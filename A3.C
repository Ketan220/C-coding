// write a program of 10 array element and display in a reverse order//
main()
{
      int i,a[10];
      clrscr();
      printf("Enter the 10 elements");
      for(i=0;i<=10;i++)
      {
	 scanf("%d",&a[i]);
      }
      for(i=10-1;i>0;i--)
      {
	 printf("%d",a[i]);

      }
      getch();
}