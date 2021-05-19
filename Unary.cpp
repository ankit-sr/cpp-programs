#include<iostream>
using namespace std;
class test
{
	int x,y,z;
	public:
		void getdata(int a,int b,int c)
		{
			x=a; y=b; z=c;
		}
		void display()
		{
			cout<<x<<"		"<<y<<"		"<<z<<endl;
		}
		void operator-()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
int main()
{
	test t;
	t.getdata(12,-15,18);
	t.display();
	-t;											// Activates operator-() function
	t.display();
	return 0;
}
