#include<iostream>
#include<stdlib.h>
using namespace std;
 
void merge(int arr[], int first, int last)
{
	int temp[10];
	int mid = (first+last)/2;
	int i = 0, j = first, k = mid+1,m=0;
	while(j<=mid && k<=last)
	{
		if(arr[j]<arr[k])
		{
			temp[i]=arr[j];
			j++;
		}
		else
		{
			temp[i] = arr[k];
			k++; 
		}
		i++;
	}
	if(j<=mid)
	{
		while(j<=mid)
		{
			temp[i]=arr[j];
			j++;
			i++;
		}
	}
	else
	{
		while(k<=last)
		{
			temp[i] = arr[k];
			k++;
			i++;
		}
	}
	while(m<i)
	{
		arr[first+m] = temp[m];
		m++;
	}
}
void merge_sort(int arr[],int first, int last)
{
	int mid;
	if(first<last)
	{
		mid = (first+last)/2 ;
		merge_sort(arr,first,mid);
		merge_sort(arr,mid+1,last);
		merge(arr,first,last);
	}
}

int main()
{
	int arr[10] = {98,86,54,25,97,35,15,85,56,24};
	merge_sort(arr , 0 , 10);
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";	
	}
}
