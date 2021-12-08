/*Write a c program thatprints all even numbers between 1 and 50*/
main()
{
     int i=1;
     clrscr();
     while(i<=50)
     {
	  if(i%2==0)
	  {
	       printf("%d",i);
	  }
	  i=i+1;
     }
     getch();
}