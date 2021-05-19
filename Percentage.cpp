#include <iostream>
using namespace std;

int main()
{
	int phy,chem,mat,bio,comp;
	cout<<"Enter marks obtained in physics : ";
	cin>>phy;
	cout<<"Enter marks obtained in chemistry : ";
	cin>>chem;
	cout<<"Enter marks obtained in maths : ";
	cin>>mat;
	cout<<"Enter marks obtained in biology : ";
	cin>>bio;
	cout<<"Enter marks obtained in computer : ";
	cin>>comp;
	float marks = phy+chem+mat+bio+comp;
	float percent = marks/5;
	if(percent >=80 )
		cout<<"Grade obtained : A ";
	else if(percent >=60 )
		cout<<"Grade obtained : B ";
	else if(percent >=40 )
		cout<<"Grade obtained : C ";
	else 
		cout<<"Grade obtained : D ";
return 0;
}
	
	
