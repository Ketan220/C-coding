/* write a c program that three integer and find out the maximum of three*/
main()
{
     int a,b,c,max;
     clrscr();
     printf("enter the 3 number");
     scanf("%d %d %d",&a,&b,&c);
     max=a;
     if(b>max);
     {
	max=b;
     }
     if(c>max)
     {
	max=c;
     }
     printf("Maximum=%d",max);
     getch();
}