//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int tc;
//	cin>>tc;
//	int cost[tc];
//	for(int i=0;i<tc;i++) {
//		cost[i] = 0;
//		int x,y;
//		string str;
//		cin>>x;
//		cin>>y;
//		cin>>str;
//		string s = "?";
//		if(x<y){
//			for(int j=0; j<str.length(); j++) {
//				int index = str.find(s);
//				if(index != string::npos) {
//					if(index == 0){
//						(str.at(index+1) == 'C') ? str.replace(index, 1, "C") : str.replace(index, 1, "J");
//					}
//					else if(index == str.length()-1) {
//						(str.at(index-1) == 'C') ? str.replace(index, 1, "C") : str.replace(index, 1, "J");
//					}
//					else{
//						if(str.at(index-1) == 'C' && str.at(index+1) == 'C')
//							str.replace(index, 1, "C");
//						if(str.at(index-1) == 'C' && str.at(index+1) == 'J')
//							str.replace(index, 1, "C");
//						if(str.at(index-1) == 'J' && str.at(index+1) == 'C')
//							str.replace(index, 1, "C");
//						if(str.at(index-1) == 'J' && str.at(index+1) == 'J')
//							str.replace(index, 1, "J");
//					}
//				}
//			}
//		}
//		else if(x>y) {
//			for(int j=0; j<str.length()-1; j++) {
//				int index = str.find(s);
//				if(index != string::npos) {
//					if(index == 0){
//						(str.at(index+1) == 'J') ? str.replace(index, 1, "J") : str.replace(index, 1, "C");
//					}
//					else if(index == str.length()-1) {
//						(str.at(index-1) == 'J') ? str.replace(index, 1, "J") : str.replace(index, 1, "C");
//					}
//					else{
//						if(str.at(index-1) == 'C' && str.at(index+1) == 'C')
//							str.replace(index, 1, "C");
//						if(str.at(index-1) == 'C' && str.at(index+1) == 'J')
//							str.replace(index, 1, "J");
//						if(str.at(index-1) == 'J' && str.at(index+1) == 'C')
//							str.replace(index, 1, "J");
//						if(str.at(index-1) == 'J' && str.at(index+1) == 'J')
//							str.replace(index, 1, "J");
//					}
//				}
//			}
//		}
//		
//		for(int k=0; k<str.length()-1; k++){
//			if(str.at(k) == 'C' && str.at(k+1) == 'J')
//				cost[i] = cost[i] + x;
//			else if(str.at(k) == 'J' && str.at(k+1) == 'C')
//				cost[i] = cost[i] + y;	
//		}
//	}
//	for(int j = 0; j<tc; j++){
//		cout<<"Case #"<<j+1<<": "<<cost[j]<<endl;
//	}
//}

#include<bits/stdc++.h>
using namespace std;

typedef long int number;

int main(){
	
	number tc;
	cin>>tc;
	for(number i=1;i<=tc; i++){
		number x,y;
		cin>>x>>y;
		string str;
		cin>>str;
		number cost = 0;
		number len = str.length();
		number previous = 'I';
		for(number j =0; j<len; j++){
			if(str[j] == 'C'){
				if(previous == 'J')
					cost = cost + y;
				previous = 'C';
			}
			else if(str[j] == 'J'){
				if(previous == 'C')
					cost = cost + x;
				previous = 'J';
			}
			else{}
		}
		cout<<"Case #"<<i<<": "<<cost<<endl;
	}
}
