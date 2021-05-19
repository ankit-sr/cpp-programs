#include<iostream>
using namespace std;

int findkey(int input1, int input2, int input3){
	
	int num[3] = {input1, input2, input3};
    int hundred[3];
    int tenth[3];
    int unit[3];
    int i1,i2,i3;
    for(int i=0;i<3;i++)
    {
        hundred[i]=num[i];
        tenth[i]=num[i];
        unit[i]=num[i];
    }
     int temp1=num[0];
            for(int i=0;i<3;i++)
            {
                num[i]=num[i]/1000;
            }
            for(int i=0;i<3;i++)
            {
                hundred[i]=hundred[i]/100;
                hundred[i]=hundred[i]%10;
            }
            int temp2=hundred[0];
            for(int i=0;i<3;i++)
            {
             tenth[i]=tenth[i]/10;
             tenth[i]=tenth[i]%10;
            }
            int temp3=tenth[0];
            for(int i=0;i<3;i++)
            {
                unit[i]=unit[i]%10;
            }
            int temp4=unit[0];
            for(int i=0;i<3;i++)
            {
                if(num[i]<temp1)
                temp1=num[i];
            }
            for(int i=0;i<3;i++)
            {
                if(hundred[i]<temp2)
                temp2=hundred[i];
            }
                for(int i=0;i<3;i++)
            {
                if(tenth[i]<temp3)
                temp3=tenth[i];
            }
                for(int i=0;i<3;i++)
            {
                if(unit[i]<temp4)
                temp4=unit[i];
            }
            
            int key = temp1*1000 + temp2*100 + temp3*10 + temp4;
            
            return key;
	
}

int main(){
	cout<<findkey(1234,
				  4567,
				  3674);
				  return 0;
}


