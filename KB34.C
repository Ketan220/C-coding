/*write a program  that reads two numbers and divided by first number
by second number.If the division  not possble print"Division not possible" */
main()
{
     int a,b;
     clrscr();
     printf("Enter the first number");
     scanf("%d",&a);
     printf("Enter the second number");
     scanf("%d",&b);
     if(a%b==0)
     {
	 printf("Divison is possible");
     }
     else
     {
	 printf("Division is not possible");
     }
     getch();
}