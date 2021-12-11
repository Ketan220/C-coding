/*write a c program that reads two integer  and check if they are
 mulitiplied or not*/
 main()
 {
     int a,b;
     clrscr();
     printf("Enter  the two numbers");
     scanf("%d %d",&a,&b);
     if(b%a==0)
     {
	 printf("Numbers are multiplied");
     }
     else
     {
	 printf("Number is not a multiplied");
     }
     getch();
 }