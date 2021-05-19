void inorder(struct bst *p)
{
	struct stack s;
    s.tos=-1;
	while(p!=NULL)
	{
		push(&s,p);
	    p=p->left;
      	while((p==NULL) && (s.tos!=-1))
		{
		    p=pop(&s);
            printf("inorder%d\n",p->data);
            p=p->right;
        }
	}
}

