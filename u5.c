#include<stdio.h>
#include<string.h>
union data
{
    int i;
    float f;
    char str[20];
};

main()
{
    union  data data;
    data.i=123;
    data.f=78.89;
    strcpy(data.str,"C lan");
    system("cls");
    printf("\nData i=%d",data.i);
    printf("\nData f=%f",data.f);
    printf("\nCharacter=%s",data.str);
}