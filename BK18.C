/*
      1
    2 2
  3 3 3
*/
main()
{
     int h,sp,c;
     clrscr();
     for(h=1;h<=3;h++)
     {
	for(sp=1;sp<=3-h;sp++)
	{
	    printf(" ");
	}
	for(c=1;c<=h;c++)
	{
	    printf("%d",h);
	}
	printf("\n");
     }
     getch();
}