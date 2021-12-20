//Create a structure produvt having members productid,name,price//
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
    b1.productid=123;
    strcpy(b1.name,"Notebook");
    b1.productprice=50.00f;
    printf("\n-------Product Details-------");
    printf("\nProduct ID=%d",b1.productid);
    printf("\nProduct name=%s",b1.name);
    printf("\nProduct price=%f",b1.productprice);

}