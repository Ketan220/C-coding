/*write a c program that accepts 4 integer p,q,r,s from the user where q,r
and s positive and p is even.If q is greater than r and s is greater than p
and if the sum of r and s is greater than the sum of p and q print"correct
values",otherwise print"wrong value".*/
main()
{
     int p,q,r,s;
     clrscr();
     printf("Enter the value of p,q,r,s");
     scanf("%d %d %d %d",&p,&q,&r,&s);
     if((q>r) && (s>p) && ((r+s)>(p+q)) && (r>0) && (s>0) && (p%2==0))
     {
	  printf("Correct values");
     }
     else
     {
	  printf("Incorrect values");
     }
     getch();
}