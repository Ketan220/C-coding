main()
{
      int i,a[5];
      clrscr();
      printf("Enter  five element");
      for(i=0;i<=5;i++)
      {
	 scanf("%d",&a[i]);
      }
      for(i=0;i<=5-1;i++)
      {
	 printf("%d",a[i]);
      }
      getch();
}