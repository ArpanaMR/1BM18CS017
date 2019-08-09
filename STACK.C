#include<stdio.h>
int stack[100];
int top=-1;
void push(int ele);
int pop();
void display();
int main()
{
	int x;
	push(1);
	push(2);
	display();
	x=pop();
	if(x!=-9999)
	printf("popped element is %d \n",x);
	display();
	return 0;
}
void push(int ele)
{
	if(top==99)
	{
		printf("stack overflow \n");
		return;
	}
	stack[++top]=ele;
}
int pop()
{
	int e;
	if(top==-1)
	{
		printf("stack underflow \n");
		return -9999;
	}
	e=stack[top];
	top=top-1;
	return e;
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty \n");
		return;
	}
	for(i=top;i>=0;i--)
	{
		printf("%d \n",stack[i]);
	}
}
