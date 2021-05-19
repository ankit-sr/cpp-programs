#include<iostream>
using namespace std;

class calc
{
	private:
		float a,b;
	public:
		void getdata()
		{
			cin>>a>>b;
		}
		void add();
		void sub();
		void mul();
		void div();
};

void calc::add()
{;
	cout<<a+b;
}
void calc::sub()
{
	cout<<a-b;
}
void calc::mul()
{
	cout<<a*b;
}
void calc::div()
{
	cout<<a/b;
}
int main()
{
	calc c1;
	c1.getdata();
	c1.add();
	c1.sub();
	c1.mul();
	c1.div();
	return 0;
}
