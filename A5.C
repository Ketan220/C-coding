//write a 5 array elemant and perform the sum ofaddition of all element//
main()
{
      int i,a[5],sum=0;
      clrscr();
      printf("Enter  five element");
      for(i=0;i<=4;i++)
      {
	 scanf("%d",&a[i]);
      }
      for(i=0;i<=4;i++)
      {
	 sum=sum+a[i];
      }
      printf("Summation=%d",sum);
      getch();
}