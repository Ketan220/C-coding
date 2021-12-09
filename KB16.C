/* write a c program to raed  an amount(integer values) and
break the amount into smallest possiblr number of notes.*/
main()
{
     int amt,total;
     clrscr();
     printf("Enter amount");
     scanf("%d",&amt);
     total=amt/100;
     printf("Notes of 100=%d\n",total);
      amt=amt-(total*100);
     total=amt/50;
     printf("Notes of 50=%d\n",total);
      amt=amt-(total*50);
     total=amt/20;
     printf("Notes of 20=%d\n",total);
      amt=amt-(total*20);
     total=amt/10;
     printf("Notes of 10=%d\n",total);
      amt=amt-(total*10);
     total=amt/5;
     printf("Notes of 5=%d\n",total);
      amt=amt-(total*5);
     total=amt/2;
     printf("Notes of 2=%d\n",total);
      amt=amt-(total*2);
     total=amt/1;
     printf("Notes of 1=%d\n",total);
     amt=amt-(total*1);
     getch();
}
