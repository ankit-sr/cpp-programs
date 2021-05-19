#include<iostream>
using namespace std;
int main()
{
    int a[10], j=0, s=0;
    for(int i=0; i<10; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<10; j++)
    {
        if(a[j]==a[j+1]&&a[j+1]==a[j+2])
            {s=1;
            break;
            }
            else
            s=0;
    }
    cout<<s;
    return 0;
}
