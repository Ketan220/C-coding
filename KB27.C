/*write c program that reads 5 numbers and counts the number of positive
 number and negative number.*/
main()
{
     int i=0,n1,n2,n3,n4,n5,pcount=0,ncount=0;
     clrscr();
     printf("Enter the five number");
     scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
     for(i=0;i<=5;i++)
     {
	if(i>0)
	{
	   pcount++;

	}
	else
	if(i<0)
	{

	   ncount++;

	}
	printf("All positive number=%d\n",pcount);
	printf("All negative numbers=%d\n",ncount);
	printf("\n");

     }
     getch();
}