/* Another example of strncmp*/
main()
{
     char namea[20]="BegineersBook";
     char nameb[20]="BeginnersBook";
     int res;
     clrscr();
     if(strncmp(namea,nameb,8)==0);
     {
	   printf("\nFirst 5 chachter of both string are same");
     }
     else
     {
	   printf("\nFirst 5 chachter of both string are same");
     }
     getch();
}

