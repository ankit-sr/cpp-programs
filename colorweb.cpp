#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
        int a[10]={'*','*','*','*','*','*','*','*','*','*'};
        HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
        for(int i=0; i<=9; i++)
        {

            cout<<a[i];
        }

      return 0;
}
