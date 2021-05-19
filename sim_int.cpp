#include<iostream>
using namespace std;
class s_int
{
	int p,r,t;
	public:
		void input();
		void sim_int();
};

void s_int::input()
{
	cout<<"\nEnter principal amount : ";
	cin>>p;
	cout<<"\nEnter rate of interest : ";
	cin>>r;
	cout<<"\nEnter time in years : ";
	cin>>t;
}
void s_int::sim_int()
{
	int x;
	x=(p*r*t)/100;
	cout<<"Simple Interest is : "<<x;
}

int main()
{
	s_int s;
	s.input();
	s.sim_int();
}

