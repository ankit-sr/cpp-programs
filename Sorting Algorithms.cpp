#include<iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;	
			}
		}
	}
}

void insertion_sort(int arr[], int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i-1; j>0; j--)
		{
			if(arr[j-1]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
			else
				break;
		}
	}
}

void selection_sort(int arr[], int n)
{
	int temp,min;
	for(int i=0;i<n-1;i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
				temp = arr[min];
				arr[min]=arr[i];
				arr[i]=temp;
			}
		}
	}
}

//------------------------Merge Sort-----------------------//
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

//-------------------Merge Sort End----------------------------//

//------------------Quick Sort---------------------------//
int partition(int arr[], int l, int h)
{
	int pivot=arr[l];
	int i=l, j=h ,temp;
	do{
		do{
			i++;
		}while(arr[i]<=pivot);
		
		do{
			j--;
		}while(arr[j]>pivot);
		
		if(i<j){
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}while(i<j);
}

void quick_sort(int arr[], int l, int h)
{
	int j;
	if(l<h)
	{
		j=partition(arr,l,h);
		quick_sort(arr,l,j);
		quick_sort(arr,j+1,h);
	}
}
//-------------------Quick Sort End------------------------//

int main()
{
	int arr[10]={5,25,35,15,7,1,85,76,42,62};
	int n;
	cout<<"\n1.Bubble Sort \n2.Insertion Sort \n3.Quick Sort \n4.Selection Sort \n5.Merge Sort \n6.Heap Sort \nEnter your choice of algorithm : ";
	cin>>n;
	switch(n)
	{
		case 1:
			bubble_sort(arr,10);
			for(int i=0;i<10;i++)
				cout<<arr[i]<<" ";
			break;
		case 2:
			insertion_sort(arr,10);
			for(int i=0;i<10;i++)
				cout<<arr[i]<<" ";
			break;
		case 3:
			quick_sort(arr,0,10);
			for(int i=0;i<10;i++)
				cout<<arr[i]<<" ";
			break;
		case 4:
			selection_sort(arr,10);
			for(int i=0;i<10;i++)
				cout<<arr[i]<<" ";
			break;
		case 5:
			merge_sort(arr , 0 , 10);
			for(int i=0;i<10;i++)
				cout<<arr[i]<<" ";
			break;
		
		default:
			cout<<"\nPlease enter a valid choice !! ";
	}
	
}

