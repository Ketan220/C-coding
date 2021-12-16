/* function with parameter and not retuning any value
ex3. creating a function  addition with 2 int parameter */
addition(int n1,int n2)
{
	 int res;
	 res=n1+n2;
	 printf("\naddition=%d",res);

}


int main()
{

      int n1,n2;
      clrscr();
      printf("\nEnter the two no.");
      scanf("%d %d",&n1,&n2);
      addition(n1,n2);
      getch();

}