// Creating a structure book having memmber bookid,title,price//
#include<stdio.h>
#include<string.h>
struct book
{
    int bookid;
    char  title[10];
    float bookprice;
}b1;
main()
{
    b1.bookid=123;
    strcpy(b1.title,"Java");
    b1.bookprice=170.33f;
    printf("\nBook id=%d",b1.bookid);
    printf("\ntitle=%s",b1.title);
    printf("\nBook id=%f",b1.bookprice);
}