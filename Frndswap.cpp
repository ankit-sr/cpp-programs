#include<iostream>
using namespace std;

class test2;
class test1
{
		int a;
		public:
			void input(int x)
			{
				a=x;
			}
			void display()
			{
				cout<<a<<endl;
			}
			friend void swap(test1 &, test2 &);                  //Friend function(call by reference)
};

class test2
{
	int b;
	public:
		void input(int x)
		{
			b=x;
		}
		void display()
		{
			cout<<b<<endl;
		}
		friend void swap(test1 &, test2 &);						//Friend function(call by reference)
};

void swap(test1 &m, test2 &n)					//Friend function definition
{
	int c;
	c=m.a;
	m.a=n.b;
	n.b=c;
}

int main()
{
	test1 x;
	test2 y;
	
	x.input(10);
	y.input(20);
	
	cout<<"\nBefore swap \na = ";
	x.display();
	cout<<"b = ";
	y.display();
	swap(x,y);										//Friend function call
	
	cout<<"\nAfter swap \na = ";
	x.display();
	cout<<"b = ";
	y.display();
	return 0;
}
