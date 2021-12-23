//Goto Statement//
#include<stdio.h>
main()
{
    int num;
    num=2;
    system("cls");
    if(num==1)
    goto label1;
                elseif(num==2)
                goto label2;
                        else 
                        goto label3;
        
    label1:
    
        printf("\n number is one");
         goto label3;
    
    label2:
    
        printf("\n number is two");
        goto label3;

    label3:
        printf("\nbye");
    
}