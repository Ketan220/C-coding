#include<stdio.h>
#include<string.h>
struct books
{
    int bookid;
    char booktitle[30];
    char bookauthor[30];
    char booksubject[30];
};
void printbook(struct books book);
main()
{
    struct books book1,book2;
    book1.bookid=1;
    strcpy(book1.booktitle,"C language");
    strcpy(book1.bookauthor,"Pankaj sir");
    strcpy(book1.booksubject,"Programming lan");
    printbook(book1);

    book2.bookid=2;
    strcpy(book2.booktitle,"C++ language");
    strcpy(book2.bookauthor,"Pankaj sir");
    strcpy(book2.booksubject,"Programming lan");
    printbook(book2);
    
    return 0;
}
 
void printbook(struct books book)
{
    printf("\n---------Books Specificationn---------");
    printf("\nBookid=%d",book.bookid);
    printf("\nBook title=%s",book.booktitle);
    printf("\nBook author=%s",book.bookauthor);
    printf("\nBook subjcet=%s",book.booksubject);
}
