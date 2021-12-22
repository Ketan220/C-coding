// To find factorial od any no. using recurion//
#include<stdio.h>
int fact(n);
main()
{
    int num,res;
    system("cls");
    printf("Enter any no.");
    scanf("%d",&num);
    res=fact(num);
    printf("Factorial=%d",res);
    return 0;
}

int fact(int n)
{
    if(n!=0)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}