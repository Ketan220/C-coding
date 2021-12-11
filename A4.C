//write  a program to enter 10 element and count even and odd elemant//
main()
{
      int i,a[10],even=0,odd=0;
      clrscr();
      printf("Enter  twn element");
      for(i=0;i<=9;i++)
      {
	 scanf("%d",&a[i]);
      }
      for(i=0;i<=9;i++)
      {
	 if(a[i]%2==0)
	 {

	     even++;
	 }
	 else
	 {
	     odd++;
	 }

      }
      printf("Total even element=%d\n",even);
      printf("Total odd element=%d\n",odd);
      getch();
}