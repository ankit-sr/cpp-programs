#include<iostream>
using namespace std;
int i,n,j;
int main()
    {
        cin>>n;
        for(i=1;i<n/2;i++)
        {
            for(i=1; i<=n/2;i++)
            {
                for(j=1; j<=n/2-i; j++)
                cout<<" ";
                for(j=1; j<=2*i; j++)
                {
                    cout<<"@"<<endl;
                }
            }
            for(i=n/2; i<=n; i++)
            {
                for(j=n/2-i; j>=1; j++)
                    cout<<" ";
                for(j=2*i-1; j>=1; j++)
                    cout<<"@"<<"\n";
            }
        }
        return 0;

    }
