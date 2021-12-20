// Craeting a structure book accepting values from the user//
#include<stdio.h>
#include<string.h>
struct book
{
    int bookid;
    char title[10];
    float bookprice;
}b1;
main()
{
    struct book book1;
    printf("Enter the bookid,title,bookprice");
    scanf("%d %s %f",&book1.bookid,&book1.title,&book1.bookprice);
    printf("\n-----Books details are---------");
    printf("\nBook Id=%d",book1.bookid);
    printf("\nBook title=%s",book1.title);
    printf("\nBook price=%f",book1.bookprice);
}