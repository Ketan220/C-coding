/* To check the length of th string*/

main()
{
     char name[20];
     int len;
     clrscr();
     puts("Enter you name");
     gets(name);
     len=strlen(name);
     printf("Length of string =%d",len);
     getch();
}
