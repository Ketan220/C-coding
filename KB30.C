/*Write a c program to find and print the square of each one values
from 1 to a specified value*/
main()
{
     int i,num;
     clrscr();
     printf("Enter the num");
     scanf("%d",&num);
     for(i=1;i<=num;i++)
     {
	 if(i%2==0)
	 {
	    printf("%d",i*i);
	 }
	 printf("\n");
     }
     getch();
     return 0;
}