/* print 1 2 3 4
	 1 2 3
	 1 2
	 1
*/
main()
{
     int r,c;
     clrscr();
     for(r=4;r>=1;r--)
     {
	 for(c=1;c<=r;c++)
	 {
	    printf("%d",c);
	 }
	 printf("\n");
     }
     getch();
}