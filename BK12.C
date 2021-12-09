/* AAAAA
   BBBB
   CCC
   DD
   E
*/
main()
{
     int r,c;
     clrscr();
     for(r='E';r>='A';r--)
     {
	 for(c='A';c<=r;c++)
	 {
	    printf("%c",c);
	 }
	 printf("\n");
     }
     getch();
}