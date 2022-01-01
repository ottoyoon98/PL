#include <iostream>
int main()
{
    int num[5];
    int sum=0;
    for(int i = 0 ; i < 5 ; i++){
        std::cout<<"input "<<i+1<<"th integer: ";
        std::cin>>num[i];
        sum+=num[i];
    }
    std::cout<<"sum: "<<sum<<std::endl;
    return 0;
}