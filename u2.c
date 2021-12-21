//ex2:- //
#include<stdio.h>
union data
{
    int num1;
    char ch;
    float num2;
};

int main()
{
    union data d1;
    d1.num1=123;
    d1.ch='K';
    d1.num2=56.978;
    system("cls");
    
    printf("\nNum1=%d",d1.num1);
    printf("\nCharacter=%c",d1.ch);
    printf("\nNum2=%f",d1.num2);
}