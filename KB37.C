/*write a c program to print 3 numbers in a line,starting from 1 and prints
n lines.Accept number of lines(n,integer)from the use.*/
main()
{
     int i,n,x=0,j=1;
     clrscr();
     printf("Enter the values of lines");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
	 while(x<3)
	 {
	     printf("%d",j++);
	     x++;
	 }
	 x=0;
     }
     printf("\n");
     getch();
}
