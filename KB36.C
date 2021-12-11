/*write a c program to find all numbers which dividing it by 7 and the
remainder is equal 2 or 3 between two given integer numbers*/
main()
{
     int a,b,i,num;
     clrscr();
     printf("Enter the first number");
     scanf("%d",&a);
     printf("Enter the second number");
     scanf("%d",&b);
     for(i=a;i<=b;i++)
     {
	 if( (i%7==2) || (i%7==3) )
	 {
	       printf("num=%d\n",i);
	 }
     }
     getch();
}
