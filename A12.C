/* To creat  an array of 3 row and 3 column*/
main()
{
     int arr[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
     int r,c;
     clrscr();
     for(r=0;r<3;r++)
     {
	  for(c=0;c<3;c++)
	  {
	     printf("%d\t",arr[r][c]);
	  }
	  printf("\n");
     }
     getch();
}