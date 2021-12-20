// Creating a structure book having two different book with two diiferent memmber bookid,title,price//
#include<stdio.h>
#include<string.h>
struct book
{
    int bookid;
    char  title[10];
    float bookprice;
}
main()
{
    struct book book1,book2;

    book1.bookid=123;
    strcpy(book1.title,"Java");
    book1.bookprice=170.33f;
    printf("\nBook id=%d",book1.bookid);
    printf("\ntitle=%s",book1.title);
    printf("\nBook id=%f",book1.bookprice);

    book2.bookid=456;
    strcpy(book2.title,"html");
    book2.bookprice=150.33f;
    printf("\nBook id=%d",book2.bookid);
    printf("\ntitle=%s",book2.title);
    printf("\nBook id=%f",book2.bookprice);

}