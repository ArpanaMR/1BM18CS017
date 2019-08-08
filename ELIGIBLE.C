#include<stdio.h>
#include<conio.h>
struct student
{
int id,age,marks;
};
int main()
{
struct student s[100];
int i,n;
printf("enter the no. of students\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the id,age and marks of student %d\n",i+1);
scanf("%d %d %d",&s[i].id,&s[i].age,&s[i].marks);
if(s[i].age>20 && s[i].marks>=0 && s[i].marks<=100)
{
printf("Data is valid\n");
if(s[i].marks>=65)
{
printf("Student is eligible\n");
}
else
printf("student is not eligible\n");
}
else
{
printf("Data is invalid\n");
printf("student is not eligible\n");
}
}
getch();
return 0;
}

