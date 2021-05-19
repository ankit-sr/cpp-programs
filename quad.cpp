#include<iostream>
using namespace std;
int main()
{
    int x=0, y=0,l, i,a=90,q;
    char s[1000];
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='L')
            a=a+90;
    else if(s[i]=='F')
    {
        q=a/90;
        if(q%4==1)
            x=x+1;
        else if(q%4==2)
            y=y+1;
        else if(q%4==3)
            x=x-1;
        else
            y=y-1;
    }
    else if(s[i]=='E')
        break;
    }
    cout<<x<<" "<<y;
    return 0;
}
