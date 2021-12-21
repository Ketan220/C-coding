//ex1:-Creat a union datawith member num1 of int type,num2 of float type,ch of character type//
#include<stdio.h>
union data
{
    int num1;
    float num2;
    char ch;
};

int main()
{
    union data d1;
    d1.num1=123;
    system("cls");
    printf("\nNum1=%d",d1.num1);
    d1.num2=45.9;
    printf("\nNum2=%f",d1.num2);
    printf("\nNum1=%d",d1.num1);//here garbage value will be printed since num2 replace value of num1//
    d1.ch='K';
    printf("\nCharacter=%c",d1.ch);
}
