/* writwe c program to convart days into years,weeks and days*/
main()
{
     int d,y,w,d1;
     printf("Enter Days cpount..!");
     scanf("%d",d);
     y=d/365;
     w=(d/365)/7;
     d1=d-(y*365+w*7);
     printf("Year=%d\n",y);
     printf("Week=%d\n",w);
     printf("Days=%d\n",d1);
     getch();
}

