#include<iostream>
using namespace std;

class test
{
	int a,b;
	public:
		test()
		{
			a=20;
			b=30;		
		}		
		friend int add(test t);
};
int add(test t)
{
	return (t.a + t.b);
}
int main()
{
	test t1;
	cout<<"\nSum is = "<<add(t1);
	return 0;
}
