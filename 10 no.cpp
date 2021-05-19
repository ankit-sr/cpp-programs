#include<iostream>
using namespace std;
int main()
{
    int a[20], max=0;
    for(int i=0; i<20; i++)
    {
        cout<<"enter "<<i+1<<"number : ";
        cin>>a[i];
    }
    max= a[0];
    for(int j=0; j<20; j++)
    {
        if(max<a[j])
            max=a[j];
    }
    cout<<"maximum number is : "<<max;
    return 0;
}
