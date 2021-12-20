// Create a structure array of 5 element of product structure//
#include<stdio.h>
#include<string.h>
struct product
{
    int productid;
    char name[10];
    float productprice;
}
main()
{
    struct product product1[5];
    int i;
    system("cls");
    for(i=1;i<=5;i++)
    {
        printf("Enter the bproductid,name,productprice");
        scanf("%d %s %f",&product1[i].productid,&product1[i].name,&product1[i].productprice);
    }
    for(i=1;i<=5;i++)
    {     
        printf("\nproduct id=%d",product1[i].productid);
        printf("\nproduct name=%s",product1[i].name);
        printf("\nproduct price=%f",product1[i].productprice);
    }
}
