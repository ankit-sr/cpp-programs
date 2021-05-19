#include<bits/stdc++.h>
using namespace std;

void Reversort(int[], int&, int);

void takeInput(int &cost)
{
	int noe;  // number of elements
	cin>>noe;
	int list[noe];
	for(int i=0; i<noe; i++){
		cin>>list[i];
	}
	Reversort(list, cost, noe);
	
}

void Reversort(int list[] ,int &cost,int noe)
{
    int i , min;
    cost = 0;
	for( i=0; i<noe-1; i++ )
	{
	    min = i;
		for(int j=i; j<noe; j++)
		{
			if(list[j] < list[min])
				min = j;
		}
		cost = cost +( (min+1) - (i+1) + 1);
		reverse(list+i,list+ min+1);
	}
	
}


int main(){
	int ntc;  //number of test cases
	cin>>ntc;
	int cost[ntc];
	for(int i=0; i<ntc; i++){
		takeInput(cost[i]);
	}
	
	for(int i=0; i<ntc; i++){
		cout<<"Case #"<<i+1<<": "<<cost[i]<<"\n";
	}
	return 0;
}

