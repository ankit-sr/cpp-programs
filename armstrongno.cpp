#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, m , ans=0,count=0;
    cout<<"enter the no. of digits of no.";
    cin>>m;
    int arr[m];
    cout<<"Enter number";
    cin>>n;
    m = n;
    for(int i=0; m%10!=0; i++)
    {
        arr[i]=m%10;
        m=m/10;
        count=count+1;
    }
    int l=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<l ; j++)
    {   
        cout<<arr[j];
        arr[j]=pow(arr[j],count);
        ans=arr[j]+ans;
    }
    if(ans==n)
        cout<<"\nThe no. "<<n<<" is an Armstrong no.";
    else
        cout<<"\nThe no. "<<n<<" is not an Armstrong no.";
}
