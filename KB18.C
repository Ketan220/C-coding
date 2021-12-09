/* writwe c program to convart a given intger (in days) to year ,month and
days. assume that all month have 30 days and all years have 365 days.*/
main()
{
     int d,y,m,d1;
     printf("Enter Days count..!");
     scanf("%d",d);
     y=d/365;
     m=(d/365)/30;
     d1=d-(y*365+m*30);
     printf("Year=%d\n",y);
     printf("Week=%d\n",m);
     printf("Days=%d\n",d1);
     getch();
}
