#include<iostream>
#include<stdio.h>
using namespace std;
void gotoxy(int x,int y)
{
    printf("%c[%d;%d]",0x1B,y,x);
}
int main()
{
	gotoxy(10,12);
	cout<<"Ankit";
	return 0;
}


