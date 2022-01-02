#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point & PntAdder(const Point &p1, const Point &p2){
    Point *temp = new Point;
    temp->xpos=p1.xpos+p2.xpos;
    temp->ypos=p1.ypos+p2.ypos;
    return *temp;
}

int main(void)
{
    Point *p1 = new Point;
    Point *p2 = new Point;
    cout<<"input point1(x, y): ";
    cin>>p1->xpos>>p1->ypos;
    cout<<"input point2(x, y): ";
    cin>>p2->xpos>>p2->ypos;
    Point &p3=PntAdder(*p1, *p2);
    cout<<"p1+p2: ("<<p3.xpos<<", "<<p3.ypos<<")"<<endl;
    delete p1;
    delete p2;
    delete &p3;
    return 0;
}