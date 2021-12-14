/* To creat  an 2 dimensional array of 3 row and 2 column to accept rno.
and marks from the user */
main()
{
     int arr[3][2];
     int r,c;
     clrscr();
     for(r=0;r<3;r++)
     {
	 for(c=0;c<2,c++)
	 {
	      printf("Enter the r.no and marks");
	      scanf("%d %d",&arr[3][2]);
	 }
     }
     printf("\n rno. and marks of 3 studentare \n");
     for(r=0;r<3;r++)
     {
	  for(c=0;c<2;c++)
	  {
	     printf("%d\t",arr[r][c]);
	  }
	  printf("\n");
     }
     getch();
}