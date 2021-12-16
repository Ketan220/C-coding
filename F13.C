/* function returning the max value  batween two numbers*/
/*  Function with parameter and not returning value
1-creat a function factorial with one in parameter  to accept no. to
calculate  and diplay the factorial of the program*/
main()
{
     int r,num;
     clrscr();
     printf("Enter the no");
     scanf("%d",&num);
     r=fact(num);
     printf("factorial=%d",r);
     getch();
}

fact(int x)
{
      int i,fact=1;
      for(i=1;i<=x;i++)
      {
	   fact=fact*i;
      }
      return(fact);
}