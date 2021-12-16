/* ex4*/
circle (float r);
main()
{
     float r;
     clrscr();
     printf("Enter the value of r");
     scanf("%f",&r);
     circle(r);
     getch();

}

circle (float r)
{
     float c,a,v;
     c=2*3.14*r;
     a=2*3.14*r*r;
     v=4/3.0*3.14*r*r*r;
     printf("\nCircumference of circle=%f",c);
     printf("\nArea of circle =%f",a);
     printf("\nVolume of sphere=%f",v);
}