#include<iostream>
using namespace std;
int main()
{
    int temp[12], max=0, min=0, sum=0;
    float avg;
    for(int i=0; i<12; i++)
    {
        cout<<"enter temp. of month "<<i+1<<"=";
        cin>>temp[i];
        sum=sum+temp[i];
    if(temp[i]>max)
        max=temp[i];
    else if(temp[i]<min)
        min=temp[i];
    }
    avg=sum/12;

    cout<<"\nmax. temp="<<max;
    cout<<"\nmin. temp="<<min;
    cout<<"\n5average temp."<<avg;
    return 0;
}
