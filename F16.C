/* Function Declaration prototype*/
#include<stdio.h>
float addition(int n1,int n2);
main()
{
     int num1,num2;
     float result;
     clrscr();
     printf("Enter the two no.");
     scanf("%d %d",&num1,&num2);
     result=addition( num1,num2);
     printf("Reusult of two no.=%f",result);
     getch();

}

float addition(int n1,int n2)
{
	float res;
	res=n1+n2;
	return(res);
}