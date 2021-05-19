#include <bits/stdc++.h>
using namespace std;

int totalCost(string str, int x, int y)
{
    int cost = 0;
    for(int i=0; i<str.length()-1; ++i)
    {
        if(str[i]=='C' && str[i+1]=='J')
            cost = cost + x;
        else if(str[i]=='J' && str[i+1]=='C')
            cost = cost + y;
    }
    return cost;
}
void completeString(int &cost)
{
    int x,y;
    cin>>x;
	cin>>y;
    string str;
    cin>>str;
    cost = totalCost(str,x,y);
    int i = 0;
    while(i < str.length())
    {
        string s = "";
        if(i > 0 && s[i] == '?')
            s = str[i-1]; 
        while(str[i] == '?')
        {
            if(i < str.length()-1)
                i = i + 1;
            else
                break;
        }
       
        string final = s + str[i];
        if(final == "CJ")
            cost = cost + x;
        else if(final == "JC")
            cost = cost + y;
        i++;
    }
}
int main()
{
    int tc;
    cin>>tc;
    int cost[tc];
    for(int i=0;i<tc;i++){
    	completeString(cost[i]);
    }
    
    for(int j=0; j<tc; j++){
    	cout<<"Case #"<<j+1<<": "<<cost[j]<<"\n;
    }
    
	return 0;
}
