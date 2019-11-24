#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node * NODE;
NODE getnode()
{
	NODE p;
	p=(NODE)malloc(sizeof(struct node));
    return p;

}
NODE push(int item,NODE head,int *count,int size)
{
	NODE p;
	if(*count<=size)
	{
		p=getnode();
		p->data=item;
		p->next=head;
		head=p;
	}
	else
	{
		printf("Stack overflow\n");
	}
	return head;
}
NODE pop(NODE head)
{
	NODE p=head;
	if(head==NULL)
	{
		printf("Stack underflow\n");
		return head;
	}
	printf("Popped element = %d\n", p->data);
	head=p->next;
	free(p);
	return head;
}
void display(NODE head)
{
	NODE p;
	if(head==NULL)
	{
		printf("stack underflow\n");
		return;
	}
	p=head;
	while(p!=NULL)
	{
		printf("%d\n", p->data);
		p=p->next;
	}
}

NODE enqueue(NODE head,int item,int *count,int size)
{
	NODE p,q;
	if(*count<=size)
	{
	q=getnode();
	q->data=item;
	q->next=NULL;
	if(head==NULL)
		return q;
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=q;
	}
	else
	{
		printf("Queue overflow\n");
	}
	return head;

}
NODE dequeue(NODE head)
{
	NODE p=head;
	if(head==NULL)
	{
		printf("Queue underflow\n");
		return head;
	}
	printf("Deleted element = %d\n", p->data);
	head=p->next;
	free(p);
	return head;
}
void displayQ(NODE head)
{
	NODE p;
	if(head==NULL)
	{
		printf("Queue is empty\n");
		exit(0);
	}
	p=head;
	while(p!=NULL)
	{
		printf("%d\n", p->data);
		p=p->next;
	}
}

int main()
{
	NODE head=NULL;
	int ch,item,count,size,x;
	count=1;
	printf("Enter 1 for stack, 2 for queues");
	scanf("%d",&x);
	if(x==1)
    {
	printf("enter the size of the stack\n");
	scanf("%d",&size);
	printf("enter\n1.push\n2.pop\n3.display\n-1.exit\n");
	scanf("%d",&ch);
	while(ch!=-1)
	{
		switch(ch)
		{
			case 1:printf("enter the item\n");
				scanf("%d",&item);
				head=push(item,head,&count,size);
				count++;
				break;
			case 2:head=pop(head);
				break;
			case 3:display(head);
				break;
			default:printf("invalid input\n");
		}
		printf("enter next choice or -1 to exit\n");
		scanf("%d",&ch);
	}
    }
    else
    {

	printf("enter the size of the queue\n");
	scanf("%d",&size);
	printf("enter\n1.insert\n2.delete\n3.display\n-1.exit\n");
	scanf("%d",&ch);
	while(ch!=-1)
	{
		switch(ch)
		{
			case 1:printf("enter the item\n");
				scanf("%d",&item);
				head=enqueue(head,item,&count,size);
				count++;
				break;
			case 2:head=dequeue(head);
				break;
			case 3:displayQ(head);
				break;
			default:printf("invalid input\n");
		}
		printf("enter next choice or -1 to exit\n");
		scanf("%d",&ch);
	}
    }

	return 0;
}
