/*write a c program that a password unti is correct.For wrong password print"Incorrect password"
and correcr passworsd print "correct password"and quit program.The correct password is 1234*/
main()
{
     int pass;
     clrscr();
     printf("Enter the password");
     scanf("%d",&pass);
    if(pass==1234)
	  {
	      printf("Correct password");

	  }
     else
	  {
	      printf("Incorrect password");
	  }

     getch();
}
