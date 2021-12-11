/*write a c program hat reads three floating values and check if it possible
to make a triangle with them.Also calculate the perimeter of the triangle if
 the said values are alid*/
 main()
 {
      float a,b,c,p;
      clrscr();
      printf("Enter the value of a,b,c");
      scanf("%f %f %f",&a,&b,&c);
      if(a<(b+c) && b<(a+c)  && c<(a+b))
      {
	  p=a+b+c;
	  printf("Perimeter=%f",p);
      }
      else
      {
	  printf("Naot a perimeter of triangle");
      }
      getch();
 }