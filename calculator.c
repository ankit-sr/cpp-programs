#include<stdio.h>
#include<stdlib.h>

void main()
{
int choice,a,b;

while(50)
{
printf("\n1-Addition");
printf("\n2-Subtraction");
printf("\n3-Division");
printf("\n4-Multiplication");
printf("\n5-Exit");

printf("\n\nenter your choice\n");
scanf("%d",&choice);
switch(choice)
{

case 1:
printf("enter two number\n");
scanf("%d %d",&a,&b);
printf("sum of %d & %d is %d ",a,b,a+b);
break;

case 2:
printf("enter two number\n");
scanf("%d %d",&a,&b);
printf("subtraction od %d & %d is %d ",a,b,a-b);
break;

case 3:
printf("enter two number");
scanf("%d %d",&a,&b);
printf("division of %d & %d is %d",a,b,a/b);
break;

case 4:
printf("Enter two  numbers.\n");
scanf("%d %d",&a,&b);
printf("Multiplicaton of %d and %d is %d",a,b,a*b);
break;

case 5: exit(0);

default:
printf("invalid choice");
}
}
}
