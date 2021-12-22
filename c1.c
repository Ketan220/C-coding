//Auto storage class//
#include<stdio.h>
void displanum();
main()
{
    auto int num1=20;
    int num2=40;
    system("cls");
    printf("\n Num1=%d",num1);
    printf("\n Num2=%d",num2);
    displaynum();
}

void displaynum()
{
    //printf("\n Num1=%d",num1);//(Error since num1 num2 is decleared auto)
   // printf("\n Num2=%d",num2);
}