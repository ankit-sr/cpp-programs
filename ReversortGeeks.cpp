#include<iostream>
#include<algorithm>

using namespace std;

//Defining method for Reverse Sorting (Reversort)
void Reversort(int list[] ,int noe)  //noe - number of elements
{
    int i , min;
	for( i=0; i<noe-1; i++ )
	{
	    min = i;
		for(int j=i; j<noe; j++)
		{
			if(list[j] < list[min])
				min = j;
		}
		reverse(list+i, list+min+1); //reverse is a method in std namespace.
	}
	
}

int main(){
	
	//Declaring the array of integer elements.
	int arr[] = {12,48,5,36,67,59,7};
	//Calculating size of the array.
	int size = sizeof(arr)/sizeof(arr[0]);
	
	//Calling Reversort function
	Reversort(arr , size);
	
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}
