#include<iostream>
using namespace std;
int main()
{
    int n;
    double x, i, j,f ,s=-1,p,sum=0;
    cin>>n;
    cin>>x;
    for(i=2; i<=n;i=i+2)
    {
        p=1; f=1;
        for(j=1; j<=i; j++)
        {
            p=p*x;
            f=f*j;
        }
        sum+=s*p/f;
        s=-1*s;
    }
    cout<<sum+1;
    return 0;
}
