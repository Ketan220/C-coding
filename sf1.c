// You can pass a structure as a function argument in the same argument in the same way as you pass any other variable//
#include<stdio.h>
#include<string.h>
struct employee
{
    int empid;
    char empname[10];
};

int main()
{
    struct employee emp;
    emp.empid=123;
    strcpy(emp.empname,"ketan");
    system("cls");
    void printemployee(struct employee emp);
    printemployee(emp);
}

void printemployee(struct employee emp)
{
    printf("Employee Details are");
    printf("\nEmployee id=%d",emp.empid);
    printf("\nEmployee name=%s",emp.empname);

}