#include<iostream>
using namespace std;
int main()
{
    int n=0, sum=0, p, m;
    cin>>n;
    while(n/10!=0)
    {
        p=n%10;
        m=p*p*p;
        sum = sum + m;
        n=n/10;
    }
   if(n/10==0)
    {
        m=n*n*n;
        sum = sum + m;
    }
    cout<<sum;
}
