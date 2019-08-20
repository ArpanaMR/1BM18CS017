#include<stdio.h>
#include<string.h>
void push(char e,char s[100],int *t);
char pop(char s[100],int *t);
int pre(char c);


void push(char e,char s[100],int *t)
{

	if(*t==99)
	{
		printf("stack overflow\n");
	}
	else
	{
		s[++(*t)]=e;
	}
}

char pop(char s[100],int *t)
{
	if(*t==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
		return s[(*t)--];
	}
}

int pre(char c)
{
	if(c=='^')
	return 3;
	else if(c=='*'||c=='/')
	return 2;
	else if(c=='+'||c=='-')
	return 1;
}

int main()
{
	char stack[100],infix[100];
	
	int top=-1,i=0,k;
	printf("enter the infix expression\n");
	scanf("%s",infix);

	
	while(infix[i]!='\0')
	{
		if((infix[i]>='A'&&infix[i]<='Z')||(infix[i]>='a'&&infix[i]<='z'))
		{
			printf("%c",infix[i]);
		}
		else if(infix[i]=='(')
		{
			push(infix[i],stack,&top);
		}
		else if(infix[i]==')')
		{
			int j=0;
			char ch;
			while(stack[j]!='(')	
			{
				ch=pop(stack,&top);
				j=j+1;
				if(ch!='('&&ch!=')')
				printf("%c",ch);
			}
		}

		else
		{
			char cha;
			if((pre(infix[i])>pre(stack[top]))||(stack[top]=='('))
			{
				push(infix[i],stack,&top);
			}
			else
			{
				int j;
				for(j=top;j>=0;j--)
				{
					if(pre(stack[j])>=pre(infix[i]))
					{
						cha=pop(stack,&top);
						push(infix[i],stack,&top);
					}
				}
			}
		}
		i=i+1;
	}
	for(k=top;k>=0;k--)
	{
		if(stack[k]!='('&&stack[k]!=')')
		{
			printf("%c",stack[k]);
		}
	}
return 0;
}
























		
