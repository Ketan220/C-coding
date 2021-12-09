/* EEEEE
   DDDD
   CCC
   BB
   A
*/
main()
{
     int r,c;
     clrscr();
     for(r='E';r>='A';r--)
     {
	 for(c='A';c<=r;c++)
	 {
	    printf("%c",r);
	 }
	 printf("\n");
     }
     getch();
}