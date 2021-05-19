#include<bits/stdc++.h>
using namespace std;

vector<int> createList(n){
	vector<int> l;
	for(int i = 1; i<n; i++)
		l.push_back(i);
	return l;
}

vector<int> operation(n,p){
	vector<int> l;
	vector<int> empty;
	if(p < n-1)
		return empty;
	int t =0, c=1;
	for(int i=n; i>0;i--){
		c+=1;
		if(t+c+i-1 >= p){
			r = p-t-i+1;
			l.push_back(r);
			for(int i=0; i<k; i++){
				l.push_back(1);
			}
			t=p;
			break;
		}
		t = t+c;
		l.push_back(c);
		if(t<p)
			return l;
	}
}

vector<int> operate(l,op){
	length = op.size();
	for(int i=0; i<length; i++){
		t = l.size() - (i+2);
		m = t + op.at(i);
		//code needs to be written
	}	
	return l;
}

void solve(){
	int n,p;
	cin>>n>>p;
	vector<int> list = createList(n);
	vector<int> op = operation(n,p);
	l = operate(l,op);
	result = "";
	if(op){
		for(int i=l.begin(); i<l.size(); i++){
			result += i + " "
		}
	else 
	}
}
