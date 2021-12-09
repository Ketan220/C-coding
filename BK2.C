/*        1
	1   2
      1   2   3
    1   2   3   4
*/
main()
{
     int h,sp,c;
     clrscr();
     for(h=1;h<=4;h++)
     {
	for(sp=1;sp<=40-h;sp++)
	{
	    printf(" ");
	}
	for(c=1;c<=h;c++)
	{
	    printf(" %d",c);
	}
	printf("\n");
     }
     getch();
}