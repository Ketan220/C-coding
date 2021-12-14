/*Wap to accept 5 student name*/
main()
{
     int i;
     char name[5][10];
     clrscr();
     for(i=0;i<5;i++)
     {
	 printf("Enter the name");
	 scanf(" %s",&name);
     }
     for(i=0;i<5;i++)
     {
	 printf("\nname is %s",name[i]);
     }
     getch();
}