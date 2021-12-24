//Progran to print fibonaaci series using recursion//
#include<stdio.h>
void printfibo(int );
main()
{
    int k,n;
    long int i=0,j=1;
    system("cls");
    printf("Enter the length og the Fibonacci series");
    scanf("%d",&n);
    printf("\n\nfirst %d terms of fibonacciseries are\n\n\n",n);
    printf("%d",1);
    printfibo(n);
    return 0;
}
void printfibo(int aj)
{
    static long int first=0,second=1,sum;
    if(aj>1)
    {
        sum=first+second;
        first=second;
        second=sum;
        printf("%ld",sum);
        printfibo(aj-1);
    }
    else
    {
        printf("\n\n\n");
    }
}