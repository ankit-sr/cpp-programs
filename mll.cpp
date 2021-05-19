#include<iostream>
using namespace std;
int main()
{
    int n, quan, rate, s, sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>quan;
        cin>>rate;
        s=rate*quan;
        sum= sum + s;
    }
    cout<<sum<<"\n";
}
