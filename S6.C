/* To check the lenghth and size of the string of the array*/

main()
{
     char name[20];
     int len;
     clrscr();
     puts("Enter you name");
     gets(name);
     len=strlen(name);
     printf("\nLength of string =%d",len);
     printf("\nSize of array=%d",sizeof(name));
     getch();
}
