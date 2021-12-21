// Program on function returning a structure//
#include<stdio.h>
struct book
{
    char title[10];
    float price;
};

struct book getbook()
{
    struct book b1;
    printf("\nEnter book title");
    scanf("%s",&b1.title);
    printf("\nEnter price of book");
    scanf("%f",&b1.price);
    return b1;
}

int main()
{
    struct book b2;
    b2=getbook();
    printf("\nbook title=%s",b2.title);
    printf("\nbook price=%f",b2.price);

}