#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
    enum {CLERK, SENIOR, ASSIST, MANAGER};
    const char *enum_str[] = {"CLERK", "SENIOR", "ASSIST", "MANAGER"};
}
class NameCard
{
private:
char * name;
char * company;
char * number;
int position; 
public:
    NameCard(char *nam, char * com, char * num, int pos)
        : position(pos)
    {
        int len;
        len = strlen(nam);
        name = new char[len+1];
        strcpy(name, nam);
        len = strlen(com);
        company = new char[len+1];
        strcpy(company, com);
        len = strlen(num);
        number = new char[len+1];
        strcpy(number, num);
    }
    ~NameCard(){
        delete []name;
        delete []company;
        delete []number;
    }
    void ShowNameCardInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Number: "<<number<<endl;
        cout<<"Position: "<<COMP_POS::enum_str[position]<<endl<<endl;
    }
};

int main()
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}