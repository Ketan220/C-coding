/*write a c program thats reads an integer and check the specfic range where
it belongs.Print an error mrssege if the number is negative and greater
than 80*/
main()
{
     int x;
     clrscr();
     printf("Enter the the value of x");
     scanf("%d",&x);
     if(x>=0 && x<=20)
     {
	printf("Range=0 to 20");
     }
     if(x>=21 && x<=40)
     {
	printf("Range=21 to 40");
     }
     if(x>=41 && x<=60)
     {
	printf("Range=41 to 60");
     }
     if(x>=61 && x<=80)
     {
	printf("Range=61 to 80");
     }
     if(x<0 && x>80)
     {
	printf("Error messege");
     }
     getch();
}
