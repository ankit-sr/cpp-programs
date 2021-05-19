#include<iostream>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
	if(ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U' )
		return true;
	else
		return false;
}

char* findStringVowelFirstAndLast(int n, char* st[]){
	char* result = "";
	for(int i=0; i<n; i++){
		char* str = st[i];
		if(isVowel(str[0]) && isVowel(str[str.length()-1])) {
			result = result + str;
			cout<<result;
		}
	return result;
	}
	
}

int main(){
	int n;
	string arr[n];
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	string result = findStringVowelFirstAndLast(n, arr);
	cout<<result;
	}
	
	
}
