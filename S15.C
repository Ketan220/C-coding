/* Another example of strcpy */
main()
{
      char s1[40]="string1";
      char s2[40]="string2:Im gonna copied into s1";
      clrscr();
      strcpy(s1,s2);
      printf("string s1=%s",s1);

      getch();
      return 0;
}

