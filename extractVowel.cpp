#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
	if(ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u')
		return true;
	else
		return false;
}

string findStringVowelFirstAndLast(int n, string st[]){
	string result = "";
	for(int i=0; i<n; i++){
		string str = st[i];
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		if(isVowel(str[0]) && isVowel(str[str.length()-1])) {
			result = result.append(str);
		}
	}
	if(result!="")
		return result;	
	else
		cout<<"no matches found";
	
}

int main(){
	int n;
	cin>>n;
	string arr[n];
	string result = "";
	for(int i=0; i<n; i++)
		cin>>arr[i];
	result = findStringVowelFirstAndLast(n, arr);
	cout<<result;
}
