import numpy as np
import mask_union

if __name__ == "__main__":
    mask_red = np.load(r"python\test\mask_red.npy")
    mask_black = np.load(r"python\test\mask_black.npy")
    
    print(mask_red)
