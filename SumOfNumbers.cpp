#include<bits/stdc++.h>
using namespace std;

int calculate(int a, int b, int c){
	a = a/100;
	a = a%10;
	
	b = b/10;
	b = b%10;
	
	int arr[4];
	for(int i=0; i<4; i++){
		arr[i] = c%10;
		c = c/10;
	}

	int mx = *max_element(arr, arr+4);
	 
	int key = (a * b) - mx;
	return key;
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int key = calculate(a,b,c);
	cout<<key;
}
