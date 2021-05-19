#include<iostream>
#include<cstdlib>
using namespace std;
class bank
{
    char name[20], actype[10];
    int acno;
    float balance;
public:
    void data();
    void deposit();
    void withdrawl();
    void display();
};
void bank::data()
{
    cout<<"enter name  ";
    cin>>name;
    cout<<"\nenter account number  ";
    cin>>acno;
    cout<<"\nenter account type ";
    cin>>actype;
    cout<<"\nenter balance ";
    cin>>balance;
}
void bank::deposit()
{
    int amount;
    cout<<"\nenter amount to deposit";
    cin>>amount;
    balance+=amount;
}
void bank::withdrawl()
{
    int amount;
    cout<<"\nyour current balance is"<<balance;
    cout<<"\nenter amount to withdrawl";
    cin>>amount;
    balance-=amount;
}
void bank::display()
{
    cout<<"\nname of a/c holder   "<<name;
    cout<<"\nbalance : "<<balance;
}
int main()
{
    bank b;
    b.data();
    int n;
    do
    {
    cout<<"\nenter your choice";
    cout<<"\n1. account details";
    cout<<"\n2. withdrawl";
    cout<<"\n3. deposit";
    cout<<"\n4. exit";
    cin>>n;
    switch(n)
    {
    case 1:
        b.display();
        break;
    case 2:
        b.withdrawl();
        break;
    case 3:
        b.deposit();
        break;
    case 4:
        exit;
        break;
    default:
        cout<<"wrong selection";
    }
    }while(n);
    return 0;
}
