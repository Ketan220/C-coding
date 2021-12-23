//Below the program on adding two numbers using recursion//
#include<stdio.h>
 int add(int,int);
main()
{
    int a,b,r;
    system("cls");
    printf("Enter the two no.");
    scanf("%d %d",&a,&b);
    r=add(a,b);
    printf("\nSummation=%d",r);
}

add(int m,int n)
{
    int y;
    if(n==0)
    return m;
    y=add(m,n-1)+1;
    return y;
}