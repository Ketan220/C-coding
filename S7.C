/* Example of strlen*/
#include<string.h>
main()
{
     char str1[20]="BeginnersBook";
     int strnlen;
     clrscr();
     printf("Lengrh of string1 when maxlen is 30=%d",strnlen(str1,30));
     printf("Lengrh of string1 when maxlen is 10=%d",strnlen(str1,10));
     getch();
     return 0;
}