#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter a number : ";
	int n; cin>>n;
	if(n==0)
		cout<<"Given number is 0.";
	else if(n>0)
		cout<<"Given number is postive.";
	else
		cout<<"Given number is negative.";
	return 0;
}
