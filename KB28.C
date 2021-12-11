/*write c program that reads 5 numbers and counts the number of positive
 number and prints the average of all positive value*/
 main()
 {
      int i,pcount=0,n1,n2,n3,n4,n5;
      float total=0,avg;
      printf("Enter first number");
      scanf("%d",&n1);
      printf("Enter seconds number");
      scanf("%d",&n2);
      printf("Enter third number");
      scanf("%d",&n3);
      printf("Enter forth number");
      scanf("%d",&n4);
      printf("Enter five number");
      scanf("%d",&n5);
      for(i=0;i<=5;i++)
      {
	  if(i>0)
	  {
	     pcount++;
	     total +=i;
	  }
      }
      avg=total/pcount;
      printf("All positive number=%d\n",pcount);
      printf("Average value of all positive numbers=%.2f",avg);
      printf("\n");
      getch();
 }


