#include<iostream>
using namespace std;

class school
{
	private:
		int student,teacher;
	public:
		school(int x,int y)
		{
			student = x;
			teacher = y;
			cout<<"Before input number of students and teachers respectively are : "<<student<<"  "<<teacher;
		}
		void input();
		void show();
};

void school::input()
{
	cout<<"\nEnter number of teachers in your school : ";
	cin>>teacher;
	cout<<"\nEnter number of students in your school : ";
	cin>>student;
}
void school::show()
{
	cout<<"\nStrength of teachers in school is : "<<teacher;
	cout<<"\nstrength of students in school is : "<<student;
}
int main()
{
	school s(50,60);
	s.input();
	s.show();
	return 0;
}
