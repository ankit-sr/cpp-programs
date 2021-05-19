#include<bits/stdc++.h>
using namespace std;

int mostFrequent(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
 
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
}

int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);

    if (it != v.end())
    {

        int index = it - v.begin();
        return index;
    }
}

long long progression(vector<int> arr){
	vector<int> result;
	long long k=0;
	for(long long i=0; i<arr.size()-1; i++){
		result[k] = arr[i+1] - arr[i];
		k++;  
	}
	int m = mostFrequent(arr, arr.size());
	long long index = getIndex(m);
	if(index!=0){
		arr[index-1] = arr[index] - m;
	}
	else{
		long long i = index;
		while(arr[i]==m){
			i++;
		}
		arr[i] = arr[i-1] + m;
	}
	long long freq = std::count(arr.begin(), arr.end(), m);
	return freq;
}

int main(){
	int t;
	cin<<t;
	long long n;
	vector<long long> v;
	for( int i=0; i<t; i++){
		cin>>t;
		long long x;
		cin>>n;
		for(long long i=0; i<n; i++){
			cin>>x;
			v.push_back(x);
		}
		long long result = progression(v);
		
		cout<<"Case #"<<i+1<<": "<<result<<endl;
	}
}
