#include <iostream>
#include <cstring>
using namespace std;

class Print
{
private:
    char prtstr[200];
public:
    void SetString(const char * str)
    {
        strcpy(prtstr, str);
    }
    void ShowString()
    {
        cout<<prtstr<<endl;
    }
};

int main(void)
{
    Print pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();
    
    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}