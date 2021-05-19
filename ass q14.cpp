#include<iostream>
using namespace std;
int smax(int arr[], int n)
{
    int max;
    max=arr[0];
    for(int i=0; i<n; i++)
    {
      if(arr[i]>max)
        max=arr[i];
    }
    for(int i=0; i<n; i++)
    {
      if(arr[i]==max)
            arr[i]=0;
    }
    max=arr[0];
    for(int i=0; i<n; i++)
    {
      if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main()
{
    int a[10];
    for(int i=0; i<10; i++)
    {
        cout<<"enter no. "<<i+1<<" :";
        cin>>a[i];
    }
   cout<<smax(a,10);
}
