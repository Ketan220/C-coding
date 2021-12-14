/* To creat  an array of 5 row and 2 column*/
main()
{
     int arr[5][2]={{1,2},{2,3},{3,4},{4,5},{5,6}};
     int r,c;
     clrscr();
     for(r=0;r<5;r++)
     {
	  for(c=0;c<2;c++)
	  {
	     printf("%d\t",arr[r][c]);
	  }
	  printf("\n");
     }
     getch();
}