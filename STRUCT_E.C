#include<stdio.h>
struct student
{
int id,age,marks;
};
int main()
{
struct student s;
int i;
printf("enter the id,age and marks of student");
scanf("%d %d %d",&s.id,&s.age,&s.marks);
if(s.age>20 && s.marks>=0 && s.marks<=100)
{
printf("Data is valid\n");
if(s.marks>=65)
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
return 0;
}

