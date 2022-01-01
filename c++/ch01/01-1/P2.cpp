#include <iostream>
int main()
{
    char name[100];
    char number[100];
    std::cout<<"What is your name? ";
    std::cin>>name;
    std::cout<<"What is your phone number? ";
    std::cin>>number;
    std::cout<<"Your name is "<<name<<"."<<std::endl;
    std::cout<<"Your phone number is "<<number<<"."<<std::endl;
    return 0;
}