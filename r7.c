//C program to calculate number rause to power of n using recursion//
#include<stdio.h>
int pow(int a,int b);
main()
{
    int base,exp;
    system("cls");
    printf("Enter the base.");
    scanf("%d",&base);
    printf("\n\nEnter the power factor");
    scanf("%d",&exp);
    printf("\n\n\n\t\t\t%d^%d=%d",base,exp,pow(base,exp));
    return 0;
}

int pow(int b,int e)
{
    if(e=0)
    {
        return 1;
    }
    return(b*pow(b,e-1));
}