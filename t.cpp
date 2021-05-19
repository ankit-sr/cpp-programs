#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<n; k++)
                cout<<"*";
        }
        cout<<"\n";
    }
    for(int g=0; g<2; g++)
    {
    for(int m=0; m<n; m++)
    {
        for(int p=0; p<n; p++)
        {
            cout<<" ";
        }
        for(int q=0; q<n; q++)
        {
            cout<<"*";
        }
         cout<<"\n";

    }


    }
    }


