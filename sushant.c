#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char info;
    struct node *link;
}stack;
struct node *start=NULL;                        //star pointer to point linked list.In starting NULL is assigned

struct node* createnode()
{
    struct node *stacklist;
    stacklist=(struct node*)malloc(sizeof(struct node));
    return(stacklist);
};

void push(char data)
{
    struct node *stack;
    stack=createnode();
    stack->info=data;
    stack->link=start; //if start pointed to null i.e. no node was present then new node will get null inside it and it will be pointed by start now.9
    start=stack;
}

char pop()
{
    char item=-1;
    struct node *temp;
    temp=start;
    item=start->info;
    start=temp->link;
    free(temp);
    return item;
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/' || x=='%')
        return 0;                                           //returning 0 if it is not an operand
    else
        return 1;                                           //returning 1 if it is not an operator or it is an operand
}

int precedence(char x)
{
    if(x=='+' || x=='-')
        return 1;                                           //arranging operators according to their precedence
    else if(x=='*' || x=='/' || x=='%')
        return 2;
    return 0;
}

char* conversion(char *infix)
{
    int i=0,j=0,l;
    l=strlen(infix);
    char *postfix;
    postfix=(char *)malloc((l+2)*sizeof(char));
    while(infix[i] != '\0')
    {
        if(isOperand(infix[i]))                              //checking if the char is operand or not
            postfix[j++]=infix[i++];
        else
        {
            if(precedence(infix[i] > precedence(stack.info)))
                push(infix[i++]);
            else
                postfix[j++]=pop();
        }
    }
    while(stack.info != NULL)
        postfix[j++]=pop;
    postfix[j]='\0';
    return postfix;
}

void main()
{
    char *infix="a+b*c-d/e";
    push('#');
    char *postfix=conversion(infix);
    printf("%s ",postfix);
}
