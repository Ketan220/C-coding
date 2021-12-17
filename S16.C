/* C string function -strstr(It is similar to strchr ,except that it searches
for stirng srch_term instead of singlr charchter*/
main()
{
     char istr[20]="String Function";
     char sstr[20];
     clrscr();
     strcpy(sstr,strstr(istr,"ing"));
     printf("Output string =%s",sstr);
     getch();
     return 0;
}
