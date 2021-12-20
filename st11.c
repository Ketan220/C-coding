// Create a structure array of 10 element of stutdent structure//
#include<stdio.h>
#include<string.h>
struct student
{
    int studentid;
    char name[10];
    float studentper;
}
main()
{
    struct student student1[10];
    int i;
    system("cls");
    for(i=1;i<=10;i++)
    {
        printf("Enter the studenttid,name,stuentper");
        scanf("%d %s %f",&student1[i].studentid,&student1[i].name,&student1[i].studentper);
    }
    for(i=1;i<=10;i++)
    {     
        printf("\nstudent id=%d",student1[i].studentid);
        printf("\nstudent name=%s",student1[i].name);
        printf("\nstudent price=%f",student1[i].studentper);
    }
}
