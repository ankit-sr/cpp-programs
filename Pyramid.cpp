#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=5,k=0;i>=1,k<5;i--,k++)
	{
		for(int space=0;space<k;space++)
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<j;
		for(j=i-1;j>=1;j--)
			cout<<j;
		cout<<endl;
	}
	for(i=2,k=4;i<=5,k>=1;i++,k--)
	{
		for(int space=k; space>1; space--)
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<j;
		for(j=i-1;j>=1;j--)
			cout<<j;
		cout<<endl;
	}
}
