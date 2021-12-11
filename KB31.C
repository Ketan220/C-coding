/*write a program to check
if two numbers in a pair of is in ascending or descending order*/
main()
{
     int a,b;
     clrscr();
     printf("Enter the first number");
     scanf("%d",&a);
     printf("Enter the second number");
     scanf("%d",&b);
     if(a<b)
     {
	   printf("Pair in a ascending order");
     }
     else
     {
	   printf("Pair in a descendind order");
     }
     getch();
}
