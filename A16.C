/* wap to multiplication row and column*/
main()
{
     int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     int arr3[3][3];
     int r,c;
     clrscr();
     for(r=0;r<3;r++)
     {
	 for(c=0;c<2;c++)
	 {
	     arr3[r][c]=arr1[r][c]*arr2[c][r];
	 }
     }
     printf("\nResult of multiplication are \n");
     for(r=0;r<3;r++)
     {
	  for(c=0;c<2;c++)
	  {
	     printf("%d\t",arr3[r][c]);
	  }
	  printf("\n");
     }
     getch();
}