//Below is a program to find sum of digits of a numbers using recursion//
#include<stdio.h>
int sumd(int );
main()
{
    int num,res;
    system("cls");
    printf("Enter the any no.");
    scanf("%d",&num);
    res=sumd(num);
    printf("Sum of digit=%d",res);   
}
int sumd(int x)
{
    if(x!=0)
    {
        return(x%10+sumd(x/10));
    }
    else
    {
        return 0;
    }
}