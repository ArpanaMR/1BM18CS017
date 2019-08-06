
#include<stdio.h>
#include<conio.h>
struct stud
{
int m1,m2,m3,m4,m5,m6,m7,m8;
};
void main()
{
struct stud s1;
clrscr();
printf("\n enter marks of 8 subjects \n");
scanf("%d %d %d %d %d %d %d %d",&s1.m1,&s1.m2,&s1.m3,&s1.m4,&s1.m5,&s1.m6,&s1.m7,&s1.m8);
printf("%d %d %d %d %d %d %d %d",s1.m1,s1.m2,s1.m3,s1.m4,s1.m5,s1.m6,s1.m7,s1.m8);
getch();
}