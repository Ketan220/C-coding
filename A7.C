/*Creating an array to store 5 subject marks and sum of all 5 subject marks*/
main()
{
     int marks[5]={23,45,67,45,87};
     int i,sum=0;
     clrscr();
     for(i=1;i<5;i++)
     {
	  sum=sum+marks[i];
     }
     printf("Sum of all 5 subject=%d",sum);
     getch();
}