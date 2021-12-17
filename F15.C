/* 3-creat function table with one int parameter to accept no.
to calculate and display the table of no.*/
main()
{
      int n,res;
      clrscr();
      printf("Enter the no.");
      scanf("%d",&n);
      res=table(n);
      printf("%d",res);
      getch();
}

table(n)
{
      int i,res;
      for(i=1;i<=3;i++)
      {
	  printf("\n%d*%d=%d",n,i,n*i);
      }
      return(res);
}

