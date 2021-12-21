//Creat a function getacoount which refer structure//
#include<stdio.h>
struct account
{
    int accountno;
    char name[10];
    float balance;
};

struct account getaccount();
int main()
{
    struct account p;
    system("cls");
    p=getaccount();
    printf("\naccountno=%d\nName=%s\nBalance=%f",p.accountno,p.name,p.balance);
}

struct account getaccount()
{
    struct account y;
    printf("Enter the account no,name,balance,");
    scanf("%d %s %f",&y.accountno,&y.name,&y.balance);
    return y;
}
