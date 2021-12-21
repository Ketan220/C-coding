//Example 1 using structure to interchange data from one to another//
#include<stdio.h>
struct product 
{
    int code;
    char name[20];
    float price;
} p1,p2,p3;

main()
{
    system("cls");
    printf("Enter the 1st product code,name,price");
    scanf("%d %s %f",&p1.code,&p1.name,&p1.price);

    printf("Enter the 2nd product code,name,price");
    scanf("%d %s %f",&p2.code,&p2.name,&p2.price);
   
    printf("\n======Before iterchanging=======");
    printf("\nproduct p1 code=%d\nname=%s\nprice=%f",p1.code,p1.name,p1.price);
    printf("\nproduct p2 code=%d\nname=%s\nprice=%f",p2.code,p2.name,p2.price);

    p3=p1;
    p1=p2;
    p2=p3;
    
    printf("\n====== After iterchanging=======");
    printf("\nproduct p1 code=%d\nname=%s\nprice=%f",p1.code,p1.name,p1.price);
    printf("\nproduct p2 code=%d\nname=%s\nprice=%f",p2.code,p2.name,p2.price);
    return 0;
}
   
  