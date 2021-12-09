/* Write a c program that accept two item's weight(floating points values)
 and the number of purchase(floating points value) and calculate average
  value of the item*/
main()
{
     float w1,w2,p1,p2,avg;
     clrscr();
     printf("w1-p1");
     scanf("%f",&w1);
     printf("No.of items");
     scanf("%f",&p1);
     printf("w2-p2");
     scanf("%f",&w2);
     printf("No.of items");
     scanf("%f",&p2);
     avg=((w1*p1)+(w2*p2))/(p1+p2);
     printf("Average=%f",avg);
     getch();
}

