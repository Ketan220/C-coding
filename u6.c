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
    system("cls");
    data.i=2029;
    printf("\nData i=%d",data.i);
    data.f=57.89;
    printf("\nData f=%f",data.f);
    strcpy(data.str,"C lan");
    printf("\nCharacter=%s",data.str);
}