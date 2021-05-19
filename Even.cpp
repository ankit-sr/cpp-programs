#include <iostream>
using namespace std;

int main() {
  
  int even[10] , odd[20];
  int counteven = 0, countodd = 0;
    for(int i = 1; i <= 20; i++){
      switch(i%2)   // this will return either 0 or 1
      {
        case 0 :
          even[counteven] = i;
          counteven++;
          break;
        case 1:
          odd[countodd] = i;
          countodd++;
          break;
          
      }
    }
      
      cout<<"Even series is : ";
      for( int i = 0; i < 10; i++)
      {
        cout<<even[i]<<" ";      
      }
      cout<<"\nOdd series is : ";
      for( int i = 0; i < 10; i++)
      {
        cout<<odd[i]<<" ";      
      }
    return 0;
}

