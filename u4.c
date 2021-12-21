#include<stdio.h>
#include<string.h>
union data
{
    int num1;
    char ch[10];
    float num2;
};

int main()
{
    union data d1;
    d1.num1=123;
    strcpy(d1.ch,"Ketan");
    d1.num2=56.978;
    system("cls");
    
    printf("\nNum1=%d",d1.num1);
    printf("\nCharacter=%s",d1.ch);
    printf("\nNum2=%f",d1.num2);
}