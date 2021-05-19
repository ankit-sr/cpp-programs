#include<stdio.h>
struct stack
{
    char arr[10];
    int tos;
};
void push(struct stack*, char);
char pop(struct stack*);
int isoprnd(char);
int isempty(struct stack);
int precedence(char, char);
void convert(char[],char[]);
void main()
{
    char in[20], post[20];
    printf("Enter a valid infix expression");
    scanf("%s",in);
    convert(in,post);
    printf("postfix expression of %s is %s",in,post);
    getch();
}
void push(struct stack *p,char ch)
{
    if(p->tos==9)
        printf("stack overflow");
    else
    {
        p->tos+=1;
        p->arr[p->tos]=ch;
    }
}
char pop(struct stack *p)
{
    char ch;
    if(p->tos==-1)
        printf("stack underflow");
    else
    {
        ch=p->arr[p->tos];
        p->tos-=1;
    }
}
int ispornd(char ch)
{
    return ((ch>=48&&ch<=57)||(ch>=65&&ch<=90)||(ch>=97&&ch<=122));
}
int isempty(struct stack s)
{
    return(s.tos==-1);
}
int precedence(char op1, char op2)
{
    if(op1=='$')
        return 1;
    else if(op2=='$')
        return 0;
    else if(op1=='*'||op1=='/'||op1=='%')
        return 1;
    else if(op2=='*'||op2=='/'||op2=='%')
        return 0;
    else if(op1=='+'||op1=='-')
        return 1;
    else
        return 0;
}
void convert(char infix[20],char postfix[20])
{
    int i,j=0;
    char ch;
    struct stack s;
    for(i=0;infix!='\0';i++)
    {
        ch=infix[i];
        if(isoprnd(ch)==1)
        {
            postfix[j]=ch;
            j++;
        }
        else
        {
            while(isempty(s)==0)
            {
                if(precedence(ch,s.tos)==1)
                    break;
                postfix[j]=pop(&s);
                j++;
            }
            push(&s,ch);
        }
        while(isempty(s)==0)
        {
            postfix[j]=pop(&s);
            j++;
        }
    }
    postfix[j]='\0';
}
