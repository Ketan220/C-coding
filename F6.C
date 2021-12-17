/* ex6 Creat function  result with 3 int parameter  to accept 3 subject
marks,calculated display total,per, and grade*/
main()
{
     int marks1,marks2,marks3;
     clrscr();
     printf("Enter the 3 sub marks");
     scanf("%d %d %d",&marks1,&marks2,marks3);
     result(marks1,marks2,marks3);
     getch();


}

result(int sub1,int sub2,int sub3)
{
     int total;
     float per;
     total=sub1+sub2+sub3;
     printf("\nTotal=%d",total);
     per=(total/3.0)*100.f;
     printf("\nPercentage=%2.f",per);
     if(per>75)
     {
	   printf("\n Grade=A");
     }
     if(per>=65 && per<=75)
     {
	  printf("\n Grade=B");
     }
     else
     {
	  printf("Grade=F");
     }
}

