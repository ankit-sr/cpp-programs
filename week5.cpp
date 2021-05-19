#include<iostream>
using namespace std;
void multiprint(char c, int n);
int main()
{
    int p; char m;
    cin>>m>>p;
    multiprint(m,p);

}
void multiprint(char c, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<c;
    }
}

