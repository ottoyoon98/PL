#include <iostream>
using namespace std;

void func1(int &arg){
    arg+=1;
}

void func2(int &arg){
    arg=-arg;
}

int main(void)
{
    int a = 20;
    func1(a);
    cout<<"first func result: "<<a<<endl;
    func2(a);
    cout<<"sencode func result: "<<a<<endl;
    return 0;
}