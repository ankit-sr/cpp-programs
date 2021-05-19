#include<bits/stdc++.h>
using namespace std;

void IncreasingString(string st, long len, int m){
	vector<long long int> count;
	long long int counter = 0;
	char min = 15;
	
	for(int i=0; i<len; i++){
		if(st[i]>min){
			counter++;
			count.push_back(counter);
			min = st[i];
		}
		
		else{
			counter = 1;
			count.push_back(counter);			
		}
	}
	cout<<"Case #"<<m+1<<": ";
	for(int i=0; i<count.size(); i++){
		cout<<count[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	long long int n;
	string st;
	for(int i =0; i<t; i++){
		cin>>n;
		cin>>st;
		IncreasingString(st,n,i);
	}
}
