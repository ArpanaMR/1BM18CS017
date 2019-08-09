#include<stdio.h>
struct stack
{
	int s[100];
	int top;
};
void push(int ele,struct stack *st);
void display(struct stack st);
int pop(struct stack *st);
int main()
{
	int x;
	struct stack st;
	st.top=-1;
	push(1,&st);
	push(2,&st);
	display(st);
	x=pop(&st);
	if(x!=-9999)
	printf("popped element is %d \n",x);
	display(st);
	return 0;
}
void push(int ele,struct stack *st)
{
	if(st->top==99)
	{
		printf("stack overflow \n");
		return;
	}
	st->top=st->top+1;
	st->s[st->top]=ele;
}
void display(struct stack st)
{
	int i;
	if(st.top==-1)
	{
		printf("stack is empty\n");
		return;
	}
	for(i=st.top;i>=0;i--)
	printf("%d \n",st.s[i]);
}
int pop(struct stack *st)
{
	if(st->top==-1)
	{
		printf("stack underflow \n");
		return -9999;
	}
	return st->s[st->top--];
}