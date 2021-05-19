#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
struct node
{
	string name;
	int age;
};

int main()
{
	node *p = new node;
	ofstream ofile("Ankit.txt");
	cout<<"Enter name : ";
	cin>>p->name;
	cout<<" Enter age : ";
	cin>> p->age;
	ofile<<p->name<<endl;
	ofile<<p->age;
	ofile.close();
	ifstream ifile;
	p->name = "ankit";
	p->age = 18;
	ifile.open("Ankit.txt");
	ifile>>p->name;
	ifile>>p->age;
	cout<<"\nName = "<<p->name;
	cout<<"Age = "<<p->age;
	ifile.close();
}

