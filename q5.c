#include<stdio.h>
#define S 50
void insert(int item,int *r,int *f,int q[]);
int delete(int q[],int *f,int *r);
void display(int q[],int r,int f);

void insert(int item,int *r,int *f,int q[])
{
	if((*f==*r+1)||(*f==0 && *r==S-1))
	{
		printf("queue overflow\n");
		return;
	}
	if(*f==-1)
		*f=0;
	*r=(*r+1)%S;
	q[*r]=item;
}

int delete(int q[],int *f,int *r)
{
	int item;
	if(*f==-1)
	{
		printf("queue underflow\n");
		return -99;
	}
	item=q[*f];
	if(*f==*r)
	{
		*f=-1;
		*r==-1;
		//printf("queue underflow\n");
	}
	else
		*f=(*f+1)%S;
	return item;
}
void display(int q[],int r,int f)
{
	int i;
	if(f==-1)
	{
		printf("playlist is empty\n");
		return;
	}
	printf("contents of playlist are :\n");
	for(i=f;i!=r;i=(i+1)%S)
		printf(" %d",q[i]);
	printf(" %d",q[i]);
	printf("\n");
}
int main()
{
	int af,bf,cf,ar,br,cr,it,x,ch,n,nd,i,fol[S],a[S],b[S],c[S],tot[S],counta,countb,countc,tr,tf,delfr,delre,dfr,ndel;
	af=-1;
	ar=-1;
	bf=-1;
	br=-1;
	cf=-1;
	cr=-1;
	tr=-1;
	tf=-1;
	counta=0;
	countb=0;
	countc=0;
	printf("enter the no.of songs");
	scanf("%d",&x);
	printf("enter 1 for motivational 2 for romantic 3 for sad songs in the folder");
	for(i=0;i<x;i++)
	{
		scanf("%d",&fol[i]);
	}
	for(i=0;i<x;i++)
	{
		if(fol[i]==1)
		{
			insert(1,&ar,&af,a);
			counta++;
		}
		else if(fol[i]==2)
		{
			insert(2,&br,&bf,b);
			countb++;
		}
		else if(fol[i]==3)
		{
			insert(3,&cr,&cf,c);
			countc++;
		}
	}
	
	for(i=0;i<counta;i++)
	{
		insert(a[i],&tr,&tf,tot);
	}
	for(i=0;i<countb;i++)
	{
		insert(b[i],&tr,&tf,tot);
	}
	for(i=0;i<countc;i++)
	{
		insert(c[i],&tr,&tf,tot);
	}
	printf("enter\n1.entire playlist\n2.playlist A\n3.playlist B\n4.Playlist C\n5.delete a song in playlist B\n6.delete playlist C\n-1.exit");
	scanf("%d",&ch);
	while(ch!=-1)
	{
		switch(ch)
		{
			case 1:display(tot,tr,tf);
				break;
			case 2:display(a,ar,af);
				break;
			case 3:display(b,br,bf);
				break;
			case 4:display(c,cr,cf);
				break;
			case 5:delfr=counta;
				delre=(counta+countb)-1;
				printf("deleted %d",delete(b,&bf,&br));
				for(i=counta;i<(counta+countb+countc-2);i++)
				{
					tot[i]=tot[i+1];
				}
				tr=counta+countb+countc-2;
				countb=countb-1;
					
				break;
			case 6:dfr=counta+countb;
		
				for(i=0;i<countc;i++)
				{
					printf("deleted %d",delete(c,&cf,&cr));
					
				}
				tr=counta+countb-1;
				countc=0;
				break;
			default: printf("invalid input\n");
		}
		printf("enter next choice or -1 to exit\n");
		scanf("%d",&ch);
	}
	return 0;
}
			
					
	
		
	
