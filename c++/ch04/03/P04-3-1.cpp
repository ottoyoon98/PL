#include <iostream>
using namespace std;

class Ring
{
private:
    int innerxpos, innerypos, innerradius, outterxpos, outterypos, outterradius;
public:
    Ring(int x1, int y1, int r1, int x2, int y2, int r2)
        : innerxpos(x1), innerypos(y1), innerradius(r1), outterxpos(x2), outterypos(y2), outterradius(r2)
    {    
    }
    void SHowPointInfo() const
    {
        cout<<"Inner Circle Info..."<<endl;
        cout<<"radius: "<<innerradius<<endl;
        cout<<"["<<innerxpos<<", "<<innerypos<<"]"<<endl;
        cout<<"Outter Circle Info..."<<endl;
        cout<<"radius: "<<outterradius<<endl;
        cout<<"["<<outterxpos<<", "<<outterypos<<"]"<<endl;
    }
};
int main()
{
    return 0;
}