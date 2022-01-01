#include <iostream>
int main()
{
    double sales_performance;
    while(true){
        std::cout<<"판매 금액을 만원 단위로 입력(-1 to end):";
        std::cin>>sales_performance;
        if(sales_performance == -1)break;
        std::cout <<"이번달 급여: "<< 50+sales_performance*0.12<<"만원"<<std::endl;
    }
    std::cout<<"프로그램을 종료합니다."<<std::endl;
    return 0;
}