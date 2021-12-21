//Creat a structure to store student rolno,name,marks of 3 sub. an cal. percentage/
#include<stdio.h>
struct student 
{
    int rollno;
    char name[10];
    int m1,m2,m3;
    float per;
  
}s1;

int main()
{
    printf("Enter the student rollno,name,marks,");
    scanf("%d %s %d %d %d ",&s1.rollno,&s1.name,&s1.m1,&s1.m2,&s1.m3);
    s1.per=(s1.m1+s1.m2+s1.m3)*100/300.0;
    printf("\nStudent rollno=%d\nstudent name=%s\nstudent percentage=%f",s1.rollno,s1.name,s1.per);

}