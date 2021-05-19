#include<iostream>
using namespace std;

class complex
{
	float x,y;
	public:
		complex(float real,float imag)
		{
			x=real;
			y=imag;
		}
		complex operator + (complex& c)
		{
			complex temp;
			temp.x = x + c.x;
			temp.y = y + c.y;
			return(temp);
		}
		void display();
};

void complex::display()
{
	cout<<x<<" + j"<<y<<endl;
}
int main()
{
	
	complex c1(5.6,3.2);
	complex c2(2.1,4.7);
	complex c3= c1 + c2;			// c3=c1.operator+(c2);
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
5.6 + j3.2
2.1 + j4.7;
7.7 + j7.9;
*/


