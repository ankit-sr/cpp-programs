#include<iostream>
using namespace std;
int main()
{
    int num, n, p, rev=0;
    cout<<"Enter a number : ";
    cin>>num;
    n=num;
    do
    {
        p=num%10;
        rev=(rev*10)+p;
        num=num/10;
    }while(num!=0);
    if(n==rev)
        cout<<"\nThe number is pallendrom";
    else
        cout<<"\nThe no. is not a pallendrom";
}
