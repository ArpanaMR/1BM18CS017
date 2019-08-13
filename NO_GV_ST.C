#include<stdio.h>
void push(int ele,int st[100],int *t);
int pop(int st[100],int *t);
void display(int st[100],int t);
int main()
{
	int x;
	int stack[100];
	int top=-1;
	push(1,stack,&top);
	push(2,stack,&top);
	display(stack,top);
	x=pop(stack,&top);
	if(x!=-9999)
	printf("popped element is %d \n",x);
	display(stack,top);
	return 0;
}
void push(int ele,int st[100],int *t)
{
	if(*t==99)
	{
		printf("stack overflow \n");
		return;
	}
	*t=*t+1;
	st[*t]=ele;
}
void display(int st[100],int t)
{
	int i;
	if(t==-1)
	{
		printf("stack is empty \n");
		return;
	}
	for(i=t;i>=0;i--)
	{
		printf("%d \n",st[i]);
	}
}
int pop(int st[100],int *t)
{
	if(*t==-1)
	{
		printf("stack underflow \n");
		return -9999;
	}
	return st[(*t)--];
}
