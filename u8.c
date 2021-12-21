#include<stdio.h>
main()
{
    union employee
    {
        int code;
        char name[20];
    }e1;
    
    printf("\nEnter the Employee code");
    scanf("\n%d",&e1.code);
    printf("Employee code=%d",e1.code);

    printf("\nEnter the Employee name");
    scanf("\n%s",&e1.name);
    printf("\nEmployee code=%s",e1.name);
}
