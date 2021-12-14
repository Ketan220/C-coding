/*wap to accept a name*/
main()
{
     int i;
     char name[10];
     clrscr();
     printf("Enter the name");
     scanf("%s",&name);
     printf("name is %s",name);
     for(i=0;i<5;i++)
     {
	  printf("\n%c",name[i]);
     }
     getch();
}