//Exren storage class//
#include<stdio.h>
int num1;
void display();
int main()
{
    extern int num1;
    printf("\n value of num1is %d",num1);
    num1=12;
    printf("\n After the value intialization of num1=%d",num1);
    display();
}

void dipplay()
{
    printf("\n After the value intialization of num1=%d",num1);
}