#include<bits/stdc++.h>
using namespace std;

//Declaration of merge() function
//since it will be called in merge_sort()
void merge(int [], int, int, int);

//Definition of merge_sort() method.
void merge_sort(int arr[], int low, int high){
	
	//Base condition whether the lower bound
	//is less than upper bound to execute further.
	if(low>=high){
		return; //Return if base condition satisfies.
	}
	
	//Calculating mid from where the array
	//will be broken into subarrays.
	int mid = low + (high-low) / 2 ;
	
	//Calling merge_sort() for first part of the array
	//i.e. for low upto mid
	merge_sort(arr,low, mid);
	
	//Calling merge_sort() for second part of the array
	//i.e. from mid+1 upto high
	merge_sort(arr,mid+1,high);
	
	//Calling merge to merge the above sorted arrays.
	merge(arr,low,mid,high);
}

//Definition of merge() method.
void merge(int arr[], int low, int mid, int high){
	
	int size = high-low+1; //Calculating the size for the temporary 
	int temp[size];        //array to store the sorted values.
	
	int i=low, j=mid+1, k=0;
	//Here i and j describes the range of arrayfor which 
	//the array has to be sorted and merged.
	
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]){
			temp[k]=arr[i];
			k++;
			i++;
		}
		else{
			temp[k]=arr[j];
			k++;
			j++;
		}
	}
	//Copying the remaining elements of
	//the first subarray, if any
	while(i<=mid){
		temp[k]=arr[i];
		k++;
		i++;
	}
	
	//Copying the remaining elements of
	//the second subarray, if any
	while(j<=high){
		temp[k]=arr[j];
		k++;
		j++;
	}
	
	//Copying the data of temp to arr.
	for(int i=low,k=0; i<=high;i++,k++){
		arr[i] = temp[k];
	}
}

//Driver Code
int main(){
	//Array to be sorted
	int arr[] = {12, 5, 48, 34, 98, 65, 7, 56};
	int size = sizeof(arr)/sizeof(arr[0]) ;
	
	cout<<"\nArray before merge_sort called : ";
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	//Calling merge sort function and passing
	//the array to be sorted as argument.
	merge_sort(arr, 0, size-1);
	
	cout<<"\nArray after merge_sort called : ";
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	  
}
