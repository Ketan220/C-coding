//write a program that reads 5 numbers  and sum of all odd values between them//
main()
{
     int n1,n2,n3,n4,n5,total=0;
     clrscr();
     printf("Enter the first number");
     scanf("%d",&n1);
     printf("Enter the second number");
     scanf("%d",&n2);
     printf("Enter the third number");
     scanf("%d",&n3);
     printf("Enter the fourth number");
     scanf("%d",&n4);
     printf("Enter the five number");
     scanf("%d",&n5);
     if(n1%2!=0)
     {
	  total=total+n1;
     }
     if(n1%2!=0)
     {
	  total=total+n1;
     }
     if(n2%2!=0)
     {
	  total=total+n2;
     }
     if(n3%2!=0)
     {
	  total=total+n3;
     }
     if(n4%2!=0)
     {
	  total=total+n4;
     }
     if(n5%2!=0)
     {
	  total=total+n5;
     }
     printf("Sum of all odd values=%d",total);
     getch();
}