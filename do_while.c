#include<stdio.h>
#include<stdio.h>

void append();
void display();
void del();
int main()
{
	int n,m;
	do
	{
	printf("\n1.Append \n2.Display \n3.Delete\n4.Quit\nEnter your choice : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\nEnter element to insert : ");
			scanf("%d",&m);
			append();
			break;
		case 2:
			display();
			break;
		case 3:
			printf("\nEnter element to delete : ");
			scanf("%d",&m);
			del();
			break;
		case 4:
			exit(0);
		default:
			printf("\nEnter valid choice ! ");
			break;
	}
	}while(1);
}

void append()
{
	printf("\nElement added. ");	
}
void display()
{
	printf("LIst is :");
}
void del()
{
	printf("\nElement deleted.");
}
