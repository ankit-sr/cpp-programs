#include<iostream>
using namespace std;

class two;
class one		//one obj        obj.setvalue                   max()
{
	int x;
	public:
		void setvalue(int i)
		{
			x=i;
		}
		void display()
		{
			cout<<x;
		}
		friend void max(one,two);            // friend int sum(name_of_the_class to which is friend)
};

class two
{
	int a;
	public:
		void setvalue(int i)
		{
			a=i;
		}
		void display2()
		{
			cout<<a;
		}
		friend void max(one,two);
};

void max(one m,two n)
{
	if(m.x> n.a) 
		cout<<m.x;
	else
		cout<<n.a;
	m.x=n.a ;//a=20
}

int main()
{
	one o;
	two t;
	o.setvalue(15);
	t.setvalue(20);
	max(o,t);
	o.display();
	t.display2();
	return 0;
}
