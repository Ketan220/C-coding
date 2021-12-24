//A palidrome is a sequence that if reversed looks identical to the original sequence//
//Solve by recursion method//
#include<stdio.h>
int n;
main()
{
    int palindrome;
    system("cls");
    printf("\n\nEnter a number check for palindrome");
    scanf("%d",&n);
    palindrome=ispal(n);
    if(palindrome==1)
    {
        printf("\n\n\n%d is palindrome\n\n\n",n);

    }
    else
    {
        printf("\n\n\n%d is not a palindrome\n\n\n",n);
    }
    return 0;
}
int ispal(int aj)
{
    static int n,sum=0;
    if(aj!=0)
    {
        sum=sum*10+aj%10;
        ispal(aj/10);
    }
    else if(sum==n)
    
        return 1;
    
    else
    
        return 0;
    
}