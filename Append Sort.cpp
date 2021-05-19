#include<bits/stdc++.h>
using namespace std;

int countop(int list[], int n){
	int count =0;
	for(int i=0; i<n-1; i++){
		if(list[i]>=list[i+1]){
			while(list[i] >= list[i+1]){
				list[i+1] = (list[i+1]*10) + (rand() %10); 
				count++;
			}
			
		}
	}
	return count;
}

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int n; 	cin>>n;
		int list[n];
		for(int j=0; j<n; j++){
			cin>>list[j];
		}
		int count = 0;
		count = countop(list, n);
		
//		for(int j=0; j<n; j++)
//			cout<<list[j]<<" ";
		cout<<"Case #"<<i+1<<": "<<count<<endl;
		
	}
}
