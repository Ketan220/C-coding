//Creat a structure employee having member empno,name,empsalary,designation//
#include<stdio.h>
struct employee
{
    int empno;
    char name[10];
    int  empsalary;
    char designation[30];
};
struct employee getemployee();
int main()
{
    struct employee p;
    system("cls");
    p=getemployee();
    printf("\nEmploye name=%d\nName=%s\nEmpsalary=%d\nDesignation=%s",p.empno,p.name,p.empsalary,p.designation);
}

struct employee getemployee()
{
    struct employee x;
    printf("Enter the employee no,name,salary,designation");
    scanf("%d %s %d %s",&x.empno,&x.name,&x.empsalary,&x.designation);
    return x;
}
