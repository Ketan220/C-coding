/*write a c program that accept  an empolyee's id ,total worked hours of
 a month and the amount he received per hour.Print the empolyee's ID and
 salary(with two decimal points places)of a particular month*/
 main()
 {
      char id[10];
      int hour;
      double value,salary;
      clrscr();
      printf("Enter the empolyee if(max. 10 char),working hour");
      scanf("%c %d",&id,&hour);
      printf("Enter the salary amount/hour");
      scanf("%lf\n",&value);
      salary=value*hour;
      printf("Employee's Id=%c salary=U$.21%.lf",id,salary);
      getch();
 }