#include<iostream>
using namespace std;

class complex
{
	float x,y;
	public:
		complex() 
		{
			x=0; y=0;
		}
		complex(float real,float imag)
		{
			x=real;
			y=imag;
		}
		complex operator + (complex c)
		{
			complex temp;
			temp.x = x + c.x;
			temp.y = y + c.y;
			return temp;
		}
		void display()
		{
			cout<<x<<" + i"<<y<<endl;
		}
};

int main()
{
	
	complex c1(5.6,3.2);
	complex c2(2.1,4.7);
	complex c3;
	c3=c1+c2;			// c3=c1.operator+(c2);
	cout<<"c1 = ";
	c1.display();
	cout<<"c2 = ";
	c2.display();
	cout<<"c3 = ";
	c3.display();
	return 0;
}


/*
Output:
c1 = 5.6 + i3.2
c2 = 2.1 + i4.7;
c3 = 7.7 + i7.9;
*/


