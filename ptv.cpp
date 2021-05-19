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


vector<int> topView(bst *root){
	
	vector<int> topview;
	
	bst *temp = root;
	topview.push_back(temp->data);
	
	while(temp!=NULL){
		temp = temp -> left;
		topview.insert(topview.begin() ,temp->data);
	}
	
	temp = root;
	
	while(temp!= NULL){
		temp = temp -> right;
		topview.push_back(temp->data);
	}
	
	return topview;
		
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

