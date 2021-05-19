#include<iostream>
using namespace std;

class Example
{
	private:
		int a;
	public:
		void setvalue()
		{
			cout<<"Enter some data : ";
			cin>>a;
		}
		void show()
		{
			cout<<"a = "<<a;
		}
};

int main()
{
	Example obj;
	obj.setvalue();
	obj.show(); 
}
