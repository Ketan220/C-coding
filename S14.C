/* C string function - strcpy
(it copies str2 into str1 then used strcpy)*/
main()
{
      char fname[10]="Mkpit";
      char lname[10];
      clrscr();
      strcpy(lname,fname);
      printf("\nName of fname=%s",lname);
      printf("\nName of lname=%s",lname);
      getch();
}

