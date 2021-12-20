//Creat a structure empolyee having member empno.,empname,empsalary,empdesignation//
#include<stdio.h>
#include<string.h>
struct empolyee
{
    int empno;
    char name[10];
    int  empsalary;
    char designation[30];
}b1;
main()
{
    b1.empno=22;
    strcpy(b1.name,"ketan");
    b1.empsalary=50000;
    strcpy(b1.designation,"Web application Devloper");
    printf("\n---------Empolyee Details--------");
    printf("\nEmpolyee no=%d",b1.empno);
    printf("\nEmpolyee name=%s",b1.name);
    printf("\nEmpoyee salary=%d",b1.empsalary);
    printf("\nEmpolyee Designation=%s",b1.designation);
}