#include<stdio.h>
#include<conio.h>
struct stud
{
int m[10];
};
void main()
{
struct stud s1;
float sgpa;
int i,g,gpa[10];
clrscr();
printf("\n enter 8 subject marks \n");
for(i=0;i<8;i++)
{
scanf("%d",&s1.m[i]);
}
for(i=0;i<8;i++)
{
if(s1.m[i]>=90)
g=10;
else if(s1.m[i]>=75&&s1.m[i]<90)
g=9;
else if(s1.m[i]>=60&&s1.m[i]<75)
g=8;
else if(s1.m[i]>=50&&s1.m[i]<60)
g=7;
else if(s1.m[i]>=40&&s1.m[i]<50)
g=6;
else
g=0;
gpa[i]=g;
}
sgpa=(float)((gpa[1]*4)+(gpa[2]*4)+(gpa[0]*4)+(gpa[3]*4)+(gpa[4]*3)+(gpa[5]*3)+(gpa[6]*2)+(gpa[7]*1))/25;
printf("sgpa= %f",sgpa);
getch();
}





