/* ex */
line(int i,char c);
main()
{
     clrscr();
     printf("\n\t\tHAPPY NEW YEAR");
     line(9,'*');
     printf("\n\t\tHAPPY");
     line(8,'&');
     printf("\n\t\tKETAN");
     line(6,'@');
     getch();
}

line(int n,char c)
{
     int i;
     printf("\n\t\t");
     for(i=1;i<=n;i++)
     {
	printf("%c",c);
     }
}