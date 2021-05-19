#include<iostream>
#include<utility>
using namespace std;

int main(){
	pair <int,char> pair1(894, 'A');
	
	cout<<pair1.first<<endl;
	cout<<pair1.second<<endl;
	
	pair <string, int> pair2;
	pair2.first = "Ankit";
	pair2.second = 345;
	cout<<pair2.first<<endl;
	cout<<pair2.second<<endl;
	
	pair <string,string> pair3;
	pair3 = make_pair("Ankit Singh Rajput", "helloksfdnljkvn");
	cout<<pair3.first<<endl;
	cout<<pair3.second;
}
