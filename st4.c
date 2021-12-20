// Craeting a structure product having member of productid,name,price accepting values from the user//
#include<stdio.h>
#include<string.h>
struct product
{
    int productid;
    char name[10];
    float productprice;
}b1;
main()
{
    struct product product1;
    printf("Enter the productid,prodectname,productprice");
    scanf("%d %s %f",&product1.productid,&product1.name,&product1.productprice);
    printf("\n-------Product Details--------");
    printf("\nProduct Id=%d",product1.productid);
    printf("\nProduct name=%s",product1.name);
    printf("\nProduct price=%f",product1.productprice);
}