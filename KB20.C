/*write a c program to print the roots of Bhaskara's formula from the given
three floating numbers.Displays a messege if it is not possible tto finds
the roots*/
main()
{
     int a,b,c,term;
     clrscr();
     printf("Enter the value of a,b,c");
     scanf("%d %d %d",&a,&b,&c);
     term=((b*b)-(4*a*c));
     if(term>0 && a!=0)
     {
       double x,y;
       term=sqrt(term);
       x=(-b+term)/(2*a);
       y=(-b-term)/(2*a);
       printf("Root 1=%f",x);
       printf("Root 2=%f",y);
     }
     else
     {
       printf("Impossible to finds roots");
     }
     getch();
}