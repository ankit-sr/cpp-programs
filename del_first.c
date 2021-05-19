void del_first(struct cnode **ps)
{
	struct node *temp *p;
	if(*ps==NULL)
	{
		printf("List is empty");
		return;
	}
	temp=*ps
	if((*ps)->next==*ps)
	{
		*ps=NULL;
		free(temp);
		return;
	}
	p=temp;
	temp=temp->next;
	*ps=temp;
	while(temp->next!=*prev)
	{
		temp=temp->next;
	}
	temp->next=*ps;
	free(p);
}
