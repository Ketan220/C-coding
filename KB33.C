/*Write a c program to read the co-ordinates(x,y)(in cartesian system) and
 finds the qaudrant to which it belong
 (Quadrant-1,Quadrant-2,Quadrant-3,Quadrant-4)*/
main()
{
     float x,y;
     clrscr();
     printf("Enter the value of x and y");
     scanf("%f %f",&x,&y);
     if(x>0 && y>0)
     {
	 printf("Points lies in fist quadrant");
     }
     if(x<0 && y>0)
     {
	 printf("Points lies in second quadrant");
     }
     if(x<0 && y<0)
     {
	 printf("Points lies in third Quadrant");
     }
     if(x>0 && y<0)
     {
	 printf("Points lies in fouth quadrant");
     }
     getch();
}