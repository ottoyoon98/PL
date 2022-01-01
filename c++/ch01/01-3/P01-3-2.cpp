#include <iostream>
int SimpleFunc(int a=10)
{
    return a+1;
}
int SimpleFunc(void)
{
    return 10;
}

int main()
{
    //SimpleFunc();
    //SimpleFunc 인스턴스 중 2개가 argument list가 동일함.
    return 0;
}