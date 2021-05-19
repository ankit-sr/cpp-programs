#include<iostream>
using namespace std;

void swap(int *x,int *y){
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers :\na = ";cin>>a;
	cout<<"\nb = ";cin>>b;
	swap(&a,&b);
	cout<<"\na = "<<a<<"\nb = "<<b;
}
