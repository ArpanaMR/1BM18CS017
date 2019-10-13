#include<stdio.h>
void push(int ele,int st[100],int *t);
int pop(int st[100],int *t);
void display(int st[100],int t);
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
int main()
{
	int a[100],b[100],c[100],t1,t2,t3,n1,n2,n3,ele,i,sa,sb,sc,e;
	t1=-1;
	t2=-1;
	t3=-1;
	sa=0;
	sb=0;
	sc=0;
	printf("enter n1\n");
	scanf("%d",&n1);
	printf("enter the heights of sylinders in first stack\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&ele);
		push(ele,a,&t1);
		sa=sa+ele;
	}
	printf("enter n2\n");
	scanf("%d",&n2);
	printf("enter the heights of sylinders in second stack\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&ele);
		push(ele,b,&t2);
		sb=sb+ele;
	}
	printf("enter n3\n");
	scanf("%d",&n3);
	printf("enter the heights of sylinders in third stack\n");
	for(i=0;i<n3;i++)
	{
		scanf("%d",&ele);
		push(ele,c,&t3);
		sc=sc+ele;
	}
	while(1)
	{
		if(sa==sb&&sb==sc)
		{
			printf("maximum height is %d",sa);
			break;
		}
		else if(sa>sb && sa>sc)
		{
			e=pop(a,&t1);
			sa=sa-e;
		}
		else if(sb>sc && sb>sa)
		{
			e=pop(b,&t2);
			sb=sb-e;
		}
		else
		{
			e=pop(c,&t3);
			sc=sc-e;
		}
	}
	return 0;
}
		
