/* wap addition of 2 matrix*/
main()
{
     int arr1[2] [2]={{1,2},{3,4}};
     int arr2[2] [2]={{5,6},{7,8}};
     int arr3[2] [2];
     int r,c;
     clrscr();
     for(r=0;r<2;r++)
     {
	  for(c=0;c<2;c++)
	  {
	     arr3[r][c]=arr1[r][c]+arr2[r][c];
	  }
     }
     printf("\nResult addition of 2 matrix are\n");
     for(r=0;r<2;r++)
     {
	  for(c=0;c<2;c++)
	  {
	     printf("%d\t",arr3[r][c]);
	  }
	  printf("\n");
     }
     getch();
}
