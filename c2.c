//Example 2 of Auto storage class//
#include<stdio.h>
void displaynum();
main()
{
    int i,j;
    system("cls");
    for(i=1;i<=5;i++)
    {
        j=1;
        printf("\n J=%d",j);
    }
    //printf("\n value of j value outside loop=%d"",j)//(Error since j is decleared inside for blocl)
}

void dissplaynum()
{
    //printf("\n Num1=%d",num1);//Error since num1 and num2 is decleared auto//
    // printf("\n Num2=%d",num2);
}