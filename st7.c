//Repeat the pervious program accpeting values from the user for 3 differnt Empolyee//
#include<stdio.h>
#include<string.h>
struct empolyee
{
    int empno;
    char name[10];
    int  empsalary;
    char empdesignation[30];
}
main()
{
    struct empolyee empolyee1,empolyee2,empolyee3;
    printf("Enter the empid,name,empsalary,designation");
    scanf("%d %s %d %s",&empolyee1.empno,&empolyee1.name,&empolyee1.empsalary,&empolyee1.empdesignation);
    printf("\n---------Empolyee1 Details--------");
    printf("\nEmpolyee no=%d",empolyee1.empno);
    printf("\nEmpolyee name=%s",empolyee1.name);
    printf("\nEmpoyee salary=%d",empolyee1.empsalary);
    printf("\nEmpolyee Designation=%s",empolyee1.empdesignation);

    printf("Enter the empid,name,empsalary,designation");
    scanf("%d %s %d %s",&empolyee2.empno,&empolyee2.name,&empolyee2.empsalary,&empolyee2.empdesignation);
    printf("\n---------Empolyee2 Details--------");
    printf("\nEmpolyee no=%d",empolyee2.empno);
    printf("\nEmpolyee name=%s",empolyee2.name);
    printf("\nEmpoyee salary=%d",empolyee2.empsalary);
    printf("\nEmpolyee Designation=%s",empolyee2.empdesignation);

    printf("Enter the empid,name,empsalary,designation");
    scanf("%d %s %d %s",&empolyee3.empno,&empolyee3.name,&empolyee3.empsalary,&empolyee3.empdesignation);
    printf("\n---------Empolyee3 Details--------");
    printf("\nEmpolyee no=%d",empolyee3.empno);
    printf("\nEmpolyee name=%s",empolyee3.name);
    printf("\nEmpoyee salary=%d",empolyee3.empsalary);
    printf("\nEmpolyee Designation=%s",empolyee3.empdesignation);
}