#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter order of square matrix : ";
	cin>>n;
	int a[n][n],leftsum=0,rightsum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"\na["<<i+1<<"]"<<"["<<j+1<<"] = ";
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				leftsum=leftsum+a[i][j];
			}
		}
	}
	for(int i=n-1,j=0;i>=0,j<n;i--,j++)
	{
		rightsum=rightsum+a[i][j];
	}
	cout<<"\nLeft Diagonal sum is : "<<leftsum;
	cout<<"\nRight Diagonal sum is : "<<rightsum;
	return 0;
	
}
