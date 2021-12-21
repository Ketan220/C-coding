//Creat a function which return structure//
#include<stdio.h>
struct order
{
    int orderno;
    char custname[10];
    char productname[10];
    float price;
    int qty;   
};

struct order getorder();
int main()
{
    struct order p;
    system("cls");
    p=getorder();
    printf("\nOrder no=%d\ncustname=%s\nproductname=%s\nprice=%f\nqty=%d",p.orderno,p.custname,p.productname,p.price,p.qty);
}

struct order getorder()
{
    struct order x;
    printf("Enter the orderno,custname,productname,price,qty");
    scanf("%d %s %s %f %d",&x.orderno,&x.custname,&x.productname,&x.price,&x.qty);
    return x;
}