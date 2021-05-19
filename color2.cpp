#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    char a[10]={'*','*','*','*','*','*','*','*','*','*'};
    for(int i=0; i<=9; i++)
    {
        SetConsoleTextAttribute(color, i);

        cout<<a[i];
    }
}
