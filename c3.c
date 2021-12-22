//Register storage class//
#include<stdio.h>
#include<stdio.h>
void displanum();
main()
{
    register int num1=20;
    int num2;//By default it is auto
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