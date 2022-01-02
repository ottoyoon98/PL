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
        cout<<"1. 계좌개설"<<endl;
        cout<<"2. 입 금"<<endl;
        cout<<"3. 출 금"<<endl;
        cout<<"4. 계좌정보 전체 출력"<<endl;
        cout<<"5. 프로그램 종료"<<endl;
        cout<<"선택: ";
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
    cout<<"프로그램 종료";
    return 0;
}


void CreateAccount(struct Account *account, int* n){
    cout<<endl;
    cout<<"[계좌개설]"<<endl;
    cout<<"계좌ID: ";
    cin>>account[*n].id;
    cout<<"이 름: ";
    cin>>account[*n].name;
    cout<<"입금액: ";
    cin>>account[*n].balance;
    *n = (*n)+1;
}

void Deposite(struct Account *account, int* n){
    cout<<endl;
    cout<<"[입    금]"<<endl;
    int id, depositeAmount;
    cout<<"계좌ID: ";
    cin>>id;
    cout<<"입금액: ";
    cin>>depositeAmount;
    for(int i = 0 ; i < *n ; i++){
        if(account[i].id == id){
            account[i].balance+=depositeAmount;
            break;
        }
    }
    cout<<"입금완료"<<endl;
}

void Withdrawal(struct Account *account, int* n){
    cout<<endl;
    cout<<"[출    금]"<<endl;
    int id, withdrawalAmount;
    cout<<"계좌ID: ";
    cin>>id;
    cout<<"출금액: ";
    cin>>withdrawalAmount;
    for(int i = 0 ; i < *n ; i++){
        if(account[i].id == id){
            account[i].balance-=withdrawalAmount;
            break;
        }
    }
    cout<<"입금완료"<<endl;
}

void AllAccountPrint(struct Account *account, int* n){
    for(int i = 0 ; i < *n ; i++){
        cout<<endl;
        cout<<"계좌ID: "<<account[i].id<<endl;
        cout<<"이 름: "<<account[i].name<<endl;
        cout<<"잔 액: "<<account[i].balance<<endl;
    }
}