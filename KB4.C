/* print * * * *
	 * * *
	 * *
	 *
*/
main()
{
     int r,c;
     clrscr();
     for(r=4;r>=1;r--)
     {
	 for(c=1;c<=r;c++)
	 {
	    printf("*");
	 }
	 printf("\n");
     }
     getch();
}