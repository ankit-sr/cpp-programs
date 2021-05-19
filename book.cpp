#include<iostream>
using namespace std;

class book
{
	private:
		int bid;
		char bname[20];
		float bprice;
	public:
		void getdata()
		{
			cout<<"\nEnter book id : ";
			cin>>bid;
			cout<<"\nEnter book name : ";
			cin>>bname;
			cout<<"\nEnter book price : ";
			cin>>bprice;
		}	
		void showdata()
		{
			cout<<"\nBook Id : "<<bid;
			cout<<"\nBook name : "<<bname;
			cout<<"\nBook price : "<<bprice;
		}
};

int main()
{
	book b;
	b.getdata();
	b.showdata();
	return 0;
}
