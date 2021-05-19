#include<stdio.h>
struct stack
{
 char arr[10];
 int tos;
};
void push(struct stack*, char);
char pop(struct stack*);
char peep(struct stack);
int isempty(struct stack);
int isoprnd(char);
int precedence(char , char);
void convert(char[],char[]);
int main()
{
 char in[20],post[20];
 printf("Enter infix expression");
 scanf("&s",in);
 convert(in,post);
 printf("postfix exp is &s",post);
 return 0;
}

void push(struct stack *p, char ch)
{
 if(p->tos==10)
 {
  printf("stack overflow");
 }
 else
 {
  p->tos+=1;
  p->arr[p->tos]=ch;
 }
}
char peep(struct stack p)
{
 char x;
 x=p.arr[p.tos];
 return x ;
}
char pop(struct stack *p)
{
 char x;
 if(p->tos==-1)
  {
    return 0;
  }
 else
 {
  x=p->arr[p->tos];
  p->tos-=1;
  return x;
 }
}
int isoprnd(char x)
{
 if((x>=48&&x<=57) || (x>=97&&x<=122)||(x>=65&&x<=92))
	return 1;
 else
	return 0;
}

int isempty(struct stack p)
{
 if(p.tos==-1)
	return 1;
 else
	return 0;
}
int precedence(char a, char b)
{
if(b=='$')
 return 1;
else if (a=='$')
 return 0;
else if(b=='/'||b=='*'||b=='%')
 return 1;
else if(a=='/'||a=='*'||a=='%')
 return 0;
else if(b=='+'||b=='-')
 return 1;
else
 return 0;
}

void convert(char infix[], char postfix[])
{
 char ch;
 int i,j=0;
 struct stack s;
 s.tos=-1;
 for(i=0; infix[i]!='\0'; i++)
 {
   ch=infix[i];
   if(isoprnd(ch)==1)
   {
    postfix[j]=ch;
    j++ ;
   }
   else
   {
    while(isempty(s)!=1)
    {
     switch(ch)
     {
     case '(':
	break;
     case ')':
	while(peep(s)!='(')
	{
	 postfix[j]=pop(&s);
	 j++;
	}
	pop(&s);
	break;
     default:
	if(precedence(s.arr[s.tos],ch)==1)
	{
	 break;
	}
	else
	{
	 while(precedence(s.arr[s.tos],ch)==0)
	 {
	  postfix[j]=pop(&s);
	  j++;
	 }
	 break;
	}
     }
     if(ch!=')')
     {
      push(&s,ch);
     }
    }
   }
 }
 while(isempty(s)!=0)
 {
  postfix[j]=pop(&s);
  j++;
 }
 postfix[j]='\0';
}




