#include <iostream>
int main()
{
    double sales_performance;
    while(true){
        std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end):";
        std::cin>>sales_performance;
        if(sales_performance == -1)break;
        std::cout <<"�̹��� �޿�: "<< 50+sales_performance*0.12<<"����"<<std::endl;
    }
    std::cout<<"���α׷��� �����մϴ�."<<std::endl;
    return 0;
}