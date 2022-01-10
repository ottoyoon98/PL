import numpy as np
from PIL import Image
from queue import Queue 

def function(mask_black, mask_red):
    assert mask_black.shape == mask_red.shape
    assert list(np.unique(mask_black)) == list(np.unique(mask_red)) == [0., 1.]
    
    dir = [[0, 1], [0, -1], [1, 0], [-1, 0]]    
    h, w = mask_red.shape
    red_in_black = np.zeros_like(mask_red)

    def BFS(x, y):
        nonlocal mask_red, red_in_black
        nonlocal dir
        nonlocal h, w

        queue = Queue()
        red_in_black[x][y]=1
        queue.put((x,y))
        while not queue.empty():
            x, y = queue.get()
            for dx, dy in dir:
                if 0 > x+dx or x+dx >= h or 0 > y+dy or y+dy >= w:
                    continue
                if mask_red[x+dx][y+dy]==1 and red_in_black[x+dx][y+dy]==0:
                    red_in_black[x+dx][y+dy]=1
                    queue.put((x+dx, y+dy))
                    
    for i in range(h):
        for j in range(w):
            if mask_black[i][j]==1 and mask_red[i][j]==1 and red_in_black[i][j]==0:
                BFS(i, j)

    return red_in_black


def show_image(mask):
    w, h = mask.shape
    data = np.zeros((w, h, 3), dtype=np.uint8)
    data[:,:,0] = np.where(mask!=2, 255, 0)
    data[:,:,1] = np.where(mask>0, 0, 255)
    data[:,:,2] = np.where(mask>0, 0, 255)
    img = Image.fromarray(data, 'RGB')
    img.show()


if __name__ == "__main__":    
    # load mask_red.npy and masK_black.npy
    # edit path
    mask_red = np.load(r"python\test\mask_red.npy")
    mask_black = np.load(r"python\test\mask_black.npy")

    # find red_in_black
    red_in_black = function(mask_black, mask_red)

    # save the result npy
    np.save(r"python\test\red_in_black.npy", red_in_black)

    # show black and red mask image
    mask_new = mask_red+mask_black*2
    show_image(mask_new)

    # show red_in_black mask image
    show_image(red_in_black)
