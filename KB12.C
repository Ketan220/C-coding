/* write a c program to calculate bike's average consumption from
the given total distance (integer value) traveled (in km) and
fuel (in litres,float numbers numbers-2 decimal points)*/
main()
{
     int x,avg;
     float y;
     clrscr();
     printf("Enter the total distance im km");
     scanf("%d",&x);
     printf("Enter the total fuel in liter");
     scanf("%f",&y);
     avg=x/y;
     printf("Bike's average=%f",avg);
     getch();
}