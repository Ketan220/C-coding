// Create a structure array of 3 element of book structure//
#include<stdio.h>
#include<string.h>
struct book
{
    int bookid;
    char name[10];
    float bookprice;
}
main()
{
    struct book book1[3];
    int i;
    system("cls");
    for(i=0;i<3;i++)
    {
        printf("Enter the bookid,name,bookprice");
        scanf("%d %s %f",&book1[i].bookid,&book1[i].name,&book1[i].bookprice);
    }
    for(i=0;i<3;i++)
    {     
        printf("\nBook id=%d",book1[i].bookid);
        printf("\nBook name=%s",book1[i].name);
        printf("\nBook price=%f",book1[i].bookprice);
    }
}
