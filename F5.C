/* Function without parameter and returning value
ex1. Creat a  function  named addition to accept 2 noand diplays the
addition of 2 no. */
#include<stdio.h>
addition()
{
     int n1,n2,res;
     clrscr();
     printf("\nEnter th two no.");
     scanf("%d %d",&n1,&n2);
     res=n1+n2;
     printf("\naddition=%d",res);
     getch();
     return(res);
}

main()
{
	printf("\n calling addition from main function");
	addition();
	printf("\n");
}