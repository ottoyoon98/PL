#include <iostream>
using namespace std;

struct Account
{
    int id;
    char name[20];
    int balance;
};

void CreateAccount(struct Account *, int*);
void Deposite(struct Account *, int*);
void Withdrawal(struct Account *, int*);
void AllAccountPrint(struct Account *, int*);

int main()
{
    int menu;
    struct Account account[100];
    int userN=0;
    while(true){
    cout<<endl;
        cout<<"-----Menu-----"<<endl;
        cout<<"1. ���°���"<<endl;
        cout<<"2. �� ��"<<endl;
        cout<<"3. �� ��"<<endl;
        cout<<"4. �������� ��ü ���"<<endl;
        cout<<"5. ���α׷� ����"<<endl;
        cout<<"����: ";
        cin>>menu;
        if(menu == 1)
            CreateAccount(account, &userN);
        else if(menu == 2)
            Deposite(account, &userN);
        else if(menu == 3)
            Withdrawal(account, &userN);
        else if(menu == 4)
            AllAccountPrint(account, &userN);
        else if(menu == 5)
            break;
    }
    cout<<"���α׷� ����";
    return 0;
}


void CreateAccount(struct Account *account, int* n){
    cout<<endl;
    cout<<"[���°���]"<<endl;
    cout<<"����ID: ";
    cin>>account[*n].id;
    cout<<"�� ��: ";
    cin>>account[*n].name;
    cout<<"�Աݾ�: ";
    cin>>account[*n].balance;
    *n = (*n)+1;
}

void Deposite(struct Account *account, int* n){
    cout<<endl;
    cout<<"[��    ��]"<<endl;
    int id, depositeAmount;
    cout<<"����ID: ";
    cin>>id;
    cout<<"�Աݾ�: ";
    cin>>depositeAmount;
    for(int i = 0 ; i < *n ; i++){
        if(account[i].id == id){
            account[i].balance+=depositeAmount;
            break;
        }
    }
    cout<<"�ԱݿϷ�"<<endl;
}

void Withdrawal(struct Account *account, int* n){
    cout<<endl;
    cout<<"[��    ��]"<<endl;
    int id, withdrawalAmount;
    cout<<"����ID: ";
    cin>>id;
    cout<<"��ݾ�: ";
    cin>>withdrawalAmount;
    for(int i = 0 ; i < *n ; i++){
        if(account[i].id == id){
            account[i].balance-=withdrawalAmount;
            break;
        }
    }
    cout<<"�ԱݿϷ�"<<endl;
}

void AllAccountPrint(struct Account *account, int* n){
    for(int i = 0 ; i < *n ; i++){
        cout<<endl;
        cout<<"����ID: "<<account[i].id<<endl;
        cout<<"�� ��: "<<account[i].name<<endl;
        cout<<"�� ��: "<<account[i].balance<<endl;
    }
}