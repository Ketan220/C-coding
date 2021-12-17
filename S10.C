/* ex of strncmp*/
main()
{
     char namea[20]="mkpit";
     char nameb[20]="makpisolution";
     int res;
     clrscr();
     res=strncmp(namea,nameb,5);
     printf("\nres=%d",res);
     if(res==0)
     {
	   printf("\nFirst 5 chachter of both string are same");
     }
     else
     {
	   printf("\nFirst 5 chachter of both string are same");
     }
     getch();
}

