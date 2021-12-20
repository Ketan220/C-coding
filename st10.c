// Create a structure array of 5 element of empolyee structure//
#include<stdio.h>
#include<string.h>
struct empolyee
{
    int empolyeeid;
    char name[10];
    float empolyeesalary;
}
main()
{
    struct empolyee empolyee1[5];
    int i;
    system("cls");
    for(i=1;i<=5;i++)
    {
        printf("Enter the empid,name,empsalayr");
        scanf("%d %s %f",&empolyee1[i].empolyeeid,&empolyee1[i].name,&empolyee1[i].empolyeesalary);
    }
    for(i=1;i<=5;i++)
    {     
        printf("\nempolyee id=%d",empolyee1[i].empolyeeid);
        printf("\nempolyee name=%s",empolyee1[i].name);
        printf("\nempolyee price=%f",empolyee1[i].empolyeesalary);
    }
}
