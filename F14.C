/* function returning the max value  batween two numbers*/
main()
{
      int res,n1,n2;
      clrscr();
      printf("Enter the two no.");
      scanf("%d %d",&n1,&n2);
      res=max(n1,n2);
      printf("\nmax no =%d",res);
      getch();



}

max(int x,int y)
{
     int res;
     if(x>y)
     {
	res=x;
     }
     else
     {
	res=y;
     }
     return(res);
}