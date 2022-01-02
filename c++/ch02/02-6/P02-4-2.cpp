#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    for(int i = 0 ; i < 5 ; i++){
        cout<<rand()%100<<" ";
    }
    cout<<endl;
    return 0;
}