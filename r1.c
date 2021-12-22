//Example sum of naturul numbers using recursion//
#include<stdio.h>
int sum(int n);
main()
{
    int number,res;
    system("cls");
    printf("Enter the no.");
    scanf("%d",&number);
    res=sum(number);
    printf("sum of natural no.=%d",res);
    return 0;
}

int sum(int n)
{
    if(n!=0)
    {
        return n + sum(n-1);
    }
    else
    {
        return n;
    }
}