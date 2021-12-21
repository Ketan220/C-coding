#include<stdio.h>
main()
{
    union employee
    {
        int code;
        char name[20];
    }e1;

    printf("Enter the employee code and name");
    scanf("%d %s",&e1.code,&e1.name);
    printf("\nEmployee code=%d\nEmployee Name=%s",e1.code,e1.name);
}