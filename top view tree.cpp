#include<bits\stdc++.h>
using namespace std;

struct bst 
{
	bst *left;
	int data;
	bst *right;	
};

void append(bst **pr, int x)
{
	bst *p,*temp,*prev;
	p=(bst *)malloc(sizeof(bst));
	p->data=x;
	p->left=p->right=NULL;
	if(*pr == NULL)
	{
		*pr=p;
		return;
	}
	temp=*pr;
	while(temp!=NULL)
	{
		prev=temp;
		if(temp->data < x)
			temp=temp->right;
		else
			temp=temp->left;
	}
	if(prev->data > x)
		prev->left=p;
	else
		prev->right=p;
}
//
//void tvl(vector<int> &el,bst *n,int pos,int &max)
//{
//    if(n==NULL)
//        return;
//    if(pos<max)
//    {
//        el.push_back(n->data);
//        max=pos;
//    }
//    tvl(el,n->left,pos-1,max);
//    tvl(el,n->right,pos+1,max);
//}
//void tvr(vector<int> &el,bst *n,int pos,int &max)
//{
//    if(n==NULL)
//        return;
//    if(pos>max)
//    {
//        el.push_back(n->data);
//        max=pos;
//    }
//    tvr(el,n->right,pos+1,max);
//    tvr(el,n->left,pos-1,max);
//}
void printTopView(bst *root)
{
    vector<int> el;
    int max=0;
    tvl(el,root->left,-1,max);
    reverse(el.begin(),el.end());
    el.push_back(root->data);
    max=0;
    tvr(el,root->right,1,max);
    
    for(int i =0 ; i< el.size(); i++)
		cout<<el.at(i)<<" "; 
	cout<<endl; 
}
vector<int> tvl(bst *root){
	bst 
	while
}
vector<int> printTopView(bst *root){
	
	
}


int main(){

	bst *root = NULL;
	append(&root,10);
	append(&root,5);
	append(&root,20);
	append(&root,2);
	append(&root,7);
	append(&root,6);
	append(&root,9);
	append(&root,18);
	append(&root,22);
	vector<int> topview = topView(root);
	
	for(int i =0 ; i< topview.size(); i++)
		cout<<topview.at(i)<<" ";

	return 0;
}




//void tvl(vector<int> &el,Node *n,int pos,int &max)
//{
//    if(n==NULL)
//        return;
//    if(pos<max)
//    {
//        el.push_back(n->data);
//        max=pos;
//    }
//    tvl(el,n->left,pos-1,max);
//    tvl(el,n->right,pos+1,max);
//}
//void tvr(vector<int> &el,Node *n,int pos,int &max)
//{
//    if(n==NULL)
//        return;
//    if(pos>max)
//    {
//        el.push_back(n->data);
//        max=pos;
//    }
//    tvr(el,n->right,pos+1,max);
//    tvr(el,n->left,pos-1,max);
//}
//vector<int> topView(Node *root)
//{
//    vector<int> el;
//    int max=0;
//    tvl(el,root->left,-1,max);
//    reverse(el.begin(),el.end());
//    el.push_back(root->data);
//    max=0;
//    tvr(el,root->right,1,max);
//	
//	for(int i =0 ; i< el.size(); i++)
//		cout<<el.at(i)<<" "; 
//	cout<<endl;    
//    
//}


