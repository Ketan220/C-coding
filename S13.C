/* C string function - strcat (To combine or
concatenation the two strins)*/
main()
{
     char s1[10]="mkpit";
     char s2[10]="solution";
     int res;
     clrscr();
     res=strcat(s1,s2);
     printf("Output after concatenation=%s",res);
     getch();
}