#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n , s=0;
    cin>>n;
    double x, a[n+1];
    cin>>x;
    for(int i=0; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int j=n, i=0; j>=0, i<=n; i++, j--)
    {
        s=s+(a[j]*pow(x,i));
    }
    cout<<s<<endl;

}
