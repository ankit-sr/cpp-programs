#include<iostream>
using namespace std;
struct stack
{
    char arr[20];
    int tos;
};
void push(struct stack *, char);
char pop(struct stack*);
char peep(struct stack);
int isoprnd(char);
int isempty(struct stack);
int precendence(char, char);
void convert(char[] ,char[]);
int main()
{
    char infix[20],postfix[20];
    cout<<"enter valid infix exp :";
    cin>>infix;
    convert(infix, postfix);
    cout<<"postfix exp is "<<postfix;
}
char peep(struct stack p)
{
    char x;
    x = p.arr[p.tos];
    return x;
}
void push(struct stack *p,char ch)
{
    if(p->tos==9)
       cout<<"stack overflow";
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
        cout<<"stack underflow";
    else
    {
        ch=p->arr[p->tos];
        p->tos-=1;
    }
    return ch;
}
int isoprnd(char ch)
{
    return((ch>=48 && ch<=57)||(ch>=65&&ch<=90) || (ch>=97&&ch<=122));
}
int isempty(struct stack p)
{
    return(p.tos==-1);
}
int precedence(char op1, char op2)
{
    if(op2=='$')
        return 1;
    else if(op1 == '$')
        return 0;
    else if(op2=='/'||op2=='*'||op2=='%')
        return 1;
    else if(op1=='/'||op1=='*'||op1=='%')
        return 0;
    else if(op2=='-'||op2=='+')
        return 1;
    else
        return 0;
}
void convert(char infix[], char postfix[])
{
    struct stack s;
    s.tos=-1;
    char ch;
    int i, j=0;
    for(i=0; infix[i]!='\0'; i++)
    {
        ch=infix[i];
        if(isoprnd(ch)==1)
         {
             postfix[j]=ch;
             j++;
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
                    if(peep(s)=='(')
                        pop(&s);
                    break;
                 default:
                    if(peep(s)=='(')
                        break;
                    else
                    {
                        if(precedence(ch, s.arr[s.tos])==1)
                        {
                            break;
                        }
                        else
                        {
                            postfix[j]=pop(&s);
                            j++;
                        }

                    }
                 }
             }
             if(ch!=')')
                push(&s, ch);

         }
    }
    while(isempty(s)!=1)
    {
        postfix[j]=pop(&s);
        j++;
    }
    postfix[j]='\0';

}
