void append(struct doubly **ps, int x)
{
	struct doubly *temp,*p;
	p=(struct doubly *)malloc(sizeof(struct doubly));
	p->data=x;
	p->next=p->prev=NULL;
	if(*ps==NULL)
	{
		*ps=p;
		return;
	}
	temp=*ps;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=p;
	p->prev->temp;
}
