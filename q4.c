#include<stdio.h>
#include<string.h>
int ismatch(char c1,char c2);


void push(char ele,char s[100],int *t);
char pop(char s[100],int *t);
int ismatch(char c1,char c2)
{
	if((c1=='{' && c2=='}')||(c1=='[' && c2==']')||(c1=='(' && c2==')'))
		return 1;
	else
		return 0;
}
void push(char ele,char s[100],int *t)
{
	if(*t==99)
	{
		printf("stack overflow\n");
	}
	else
		s[++(*t)]=ele;
}
char pop(char s[100],int *t)
{
	if(*t==-1)
		return -3;
	else
		return s[(*t)--];
}

int main()
{
	char exp[100],stack[100];
	int top=-1;
	int flag=0;
	int i=0;
	printf("enter the expression\n");
	scanf("%s",exp);
	while(exp[i]!='\0')
	{
		if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
			push(exp[i],stack,&top);
		else if(exp[i]=='}'||exp[i]==']'||exp[i]==')')
		{
			if(!(ismatch(pop(stack,&top),exp[i])))
			{
				flag=1;
				break;
			}
		}
		i++;
	}
	if(flag==1)
		printf("invalid\n");
	else
		printf("valid\n");
	return 0;
}
	
