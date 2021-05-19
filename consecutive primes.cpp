#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

long long int primes(long long int n)
{
	vector<int> v;
    for (long long int i = 2; i <= n; i++) {
        if (isPrime(i))
            v.push_back(i);
    }
    for(long long int i=0; i<n/2; i++){
    	if(v[i]*v[i+1]<=n && v[i+1]*v[i+2]>n)
    		return v[i]*v[i+1];
	}
}

int main(){
	int t;
	cin>>t;
	long long int z;
	for(int i=0; i<t; i++){
		cin>>z;
		long long int result = primes(z);
		cout<<"Case #"<<i+1<<": "<<result<<endl;
	}
}
