/*write a c program to calculate the sum all numbers and not divisible by 17
between two given integer numbers*/
main()
{
     int a,b,i, temp,sum=0;
     clrscr();
     printf("Enter the first number");
     scanf("%d",&a);
     printf("Enter the second number");
     scanf("%d",&b);
     if(a>b)
     {
	temp=b;
	b=a;
	a=temp;
     }
     for(i=a;i<=b;i++)
     {
	if((i*17)!=0)
	{
	      sum=sum+i;
	}
     }
     printf("sum=%d\n",sum);
     getch();
}