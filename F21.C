/* ex6 */
double power(int x,int n);
main()
{
     int x,n;
     double result;
     clrscr();
     printf("Enter the two no.");
     scanf("%d %d",&x,&n);
     printf("\n%d is powe of %d",x,n);
     result=power(x,n);
     printf("power=%.2lf",result);
     getch();
     return (x,n);

}

double power(int x,int n)
{
    int i;
    double p=1;
    if(n<0)
    {
	for(i=1;i<=-n;i++)
	{
	    p=p*1.0/x;
	}
    }
    else
    {
	for(i=1;i<=n;i++)
	{
	  p=p*x;

	}
    }
    return p;
}
