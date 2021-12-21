// Example 1//
#include<stdio.h>
#include<string.h>
struct employee
{
    int empid;
    char empname[10];
};
void printemployee(struct employee emp);
int main()
{
    struct employee emp1,emp2;
    emp1.empid=123;
    strcpy(emp1.empname,"ketan");
    printemployee(emp1);

    emp2.empid=456;
    strcpy(emp2.empname,"Bhnage");
    printemployee(emp2);
}

void printemployee(struct employee emp)
{
    printf("\n------Employee Details are------");
    printf("\nEmployee id=%d",emp.empid);
    printf("\nEmployee name=%s",emp.empname);
}