#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *str1 = new char[100];
    char *str2 = new char[100];
    cout<<"str1: ";
    cin>>str1;
    cout<<"str2: ";
    cin>>str2;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char *str3 = new char[len1+len2];
    strcpy(str3, str1);
    strcat(str3, str2);
    
    if(!strcmp(str1, str2))
        cout<<"str1 is the same as str2."<<endl;
    else
        cout<<"str1 is not the same as str2."<<endl;

    cout<<"str1+str2: "<<str3<<endl; 

    delete []str1;
    delete []str2;
    delete []str3;
    return 0;
}
