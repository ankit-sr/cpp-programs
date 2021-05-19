#include<iostream>
using namespace std;
 
//int main()
//{
//	for(int i = 1; i<=20; i++){
//		if(i%2 != 0){
//			continue;
//		}
//		cout<<i<<" ";
//	} 
//}
void printEvenOdd(int current , int limit);

int main(){
	cout<<"Odd : ";
	printEvenOdd(1 , 20);
	cout<<"\nEven : ";
	printEvenOdd(2 , 20);
	
	return 0;
}

void printEvenOdd(int current , int limit){
	 
	 if(current > limit)
	 	return;
	 	
	cout<<current<<" ";
	
	printEvenOdd(current + 2 , limit);
}
