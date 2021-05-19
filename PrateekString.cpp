#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string st;
    char c[10];
    cout<<"ENter the strings:";
    cin>>st;
	int length=st.size();
    cout<<"Length of string:"<<length<<endl;
    //cout<<"ENter a character:";
    //cin>>c;
    //cout<<"ASCII code is:"<<int(c);
    int i=0;
    while(length>=1)
    {
        c[i]=int(st[i])+(length-1);
        cout<<c[i];
        i++;
        length--;
	}

    return 0;
}
