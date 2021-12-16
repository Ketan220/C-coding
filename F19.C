/* ex3*/
si(float,float,float);
main()
{
     int p,q,r;
     float s;
     clrscr();
     printf("\Enter the value of p,q,r");
     scanf("%d %d %d",&p,&q,&r);
     si(p,q,r);
     getch();
}

si(float p,float q,float r)
{
     float s;
     s=(p*q*r)/100;
     printf("si=%.2f",s);
}
