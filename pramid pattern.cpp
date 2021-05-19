#include<iostream>
using namespace std;
 
int main(){
	int n = 5;
	for(int i=1; i<=n ; i++){
		
		for(int space = n-i; space >= 0; space--){
			cout<<"  ";
		}
		
		for(int j = 1; j<=i; j++){
			cout<<j<<" ";
		}
		
		for(int k = i-1; k>0 ; k--){
			cout<<k<<" ";
		}
		cout<<endl;
	}
}
