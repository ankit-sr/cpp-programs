#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],sum[3][3],mul[3][3];
	int i,j,k;
	cout<<"Enter elements of first matrix : ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter elements of second matrix : ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
		for(j=0;j<3;j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<3;i++)    
	{    
		for(j=0;j<3;j++)    
		{		    
			mul[i][j]=0;    
			for(k=0;k<3;k++)    
			{    
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];    
			}	    
		}    
	}
	cout<<"\nMultiplication of given two matrix is : "
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<mul[i][j]<<" ";
		}
		cout<<endl;
	}	    
}

