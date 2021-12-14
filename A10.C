/*Creating an array to store 5 subject marks and sum of all 5 subject marks*/
main()
{
     int marks[5];
     int i,sum=0;
     clrscr();
     for(i=0;i<5;i++)
     {
	  printf("\nEnter the marks");
	  scanf("%d",&marks[i]);
	  sum=sum+marks[i];
     }
     printf("\nSum of 5 marks=%d",sum);
     getch();
}