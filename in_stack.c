#include<stdio.h>
#include<stdlib.h>
void push(int s[100],int *t);
void pop(int s[100],int *t);
void display(int s[100],int t);
int main()
{
	int stack[100];
	int top=-1;
	int ch;
	printf("enter 1 for push\n2 for display \n 3 for pop \n -3 to exit");
	scanf("%d",&ch);
	while(1)
	{
	if(ch==1)
	push(stack,&top);
	else if(ch==2)
	display(stack,top);
	else if(ch==3)
	pop(stack,&top);
	else if(ch==-3)
	exit(0);
	else
	{
	printf("wrong input");
	break;
	}
	printf("enter 1 for push\n2 for display \n 3 for pop \n -3 to exit");
	scanf("%d",&ch);
	}
}
void push(int s[100],int *t)
{
	int n,i,e;
	if(*t==99)
	{
	printf("stack overflow\n");
	return;
	}
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	printf("enter the elements to be pushed");
	for(i=0;i<n;i++)
	{

		scanf("%d",&e);
		s[++(*t)]=e;
	}
	
}
void display(int s[100],int t)
{
	int i;
	if(t==-1)
	{
	printf("stack is empty\n");
	}
	else
	{
	for(i=t;i>=0;i--)
	printf("%d\n",s[i]);
	}
}
void pop(int s[100],int *t)
{
	int n,i;
	if(*t==-1)
	{
	printf("stack underflow\n");
	}
	else
	{
	printf("enter the no.of elements to be popped");
	scanf("%d",&n);
	if(n<*t)
	{
		for(i=0;i<n;i++)
		{
		printf("popped element is %d\n",s[(*t)--]);
		}
	}
	
	}
}
	






























		
	

