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
    printf("Memory size occupied by data=%d",sizeof(data));
}