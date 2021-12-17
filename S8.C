/* ex1 c star function-strcmp */
main()
{
     char name[10]="ketan";
     char name1[10]="ketan";
     int res;
     clrscr();
     res=strcmp(name,name1);
     if(res==0)
     {
	     printf("Strings are equal");
     }
     else
     {
	     printf("Strings are not equal");
     }
     getch();
}