#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void)
    {
        std::cout<<"Function is defined by BestCom"<<std::endl;
    }
}

namespace ProgComImpl
{
    void SimpleFunc(void)
    {
        std::cout<<"Function is defined by ProgCom"<<std::endl;
    }
}

int main(void)
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}