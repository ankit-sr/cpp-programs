#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++)
            cout<<i<<" ";
            cout<<endl;
    for(int i=n, m=1;i>1, m<=n;m++,i--)
    {
        for(int j=m; j<=n; j++)
        {
            if (j == 5 || j == m)
                cout << j<<" ";
            else
                cout <<"  ";
        }
        cout << endl;
    }

        return 0;
}
