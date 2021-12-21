//Structure inside structure//
#include<stdio.h>
struct name
{
    char fname[15];
    char mname[15];
    char lname[15];
};
struct employee
{
    int code;
    struct name ename;
    float sal;
}e1,e2;

main()
{
    printf("\nEnter Employee code");
    scanf("%d",&e1.code);
    printf("\nEnter first middle last name");
    scanf("%s %s %s",&e1.ename.fname,&e1.ename.mname,&e1.ename.lname);
    printf("\nEnter salary");
    scanf("salary=%f",&e1.sal);
    
    e2.code=e1.code;
    e2.ename=e1.ename;
    e2.sal=e1.sal;
    
    printf("\ncode=%d",e2.code);
    printf("%s %s %s",e2.ename.fname,e2.ename.mname,e2.ename.lname);
    printf("\nsalary=%f",e2.sal);


}
