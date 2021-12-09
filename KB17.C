/* write a cprogram to convert given a given integer (in sec) in hours,
minute and seconds.*/
main()
{
     int s,h,m,s1;
     clrscr();
     printf("Enter the seconds");
     scanf("%d",&s);
     h=s/3600;
     m=(s-h*3600)/60;
     s1=s-(h*3600+m*60);
     printf("Hours=%d\n",h);
     printf("Minutes=%d\n",m);
     printf("s1=%d\n",s);
     getch();
}