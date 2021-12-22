//Static storage class//
#include<stdatomic.h>
main()
{
    int i;
    system("cls");
    for(i=1;i<=3;i++)
    {
        static int num1=5;
        int num2=10;
        num1++;
        num2++;
        printf("\n Value of static variable num1=%d",num1);
        printf("\n Value of nom-static variable num2=%d",num2);
    }
}