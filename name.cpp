#include<iostream>
using namespace std;
int main()
{
char c[4];
int i,j;
cout<<"enter name=";
cin>>c;
for(i=0; i<5; i++)
{
for(j=0; j<=i; j++)
{
cout<<c[j];
}cout<<endl;
}
}
