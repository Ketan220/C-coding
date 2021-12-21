// Program on function returning a structure//
#include<stdio.h>
struct product 
{
    int code;
    char name[15];
};
  
struct product getproduct();
int main()
{
    struct product p;
    p=getproduct();
    printf("\ncode=%d\nName=%s",p.code,p.name);
}

struct product getproduct()
{
    struct product x;
    printf("\nEnter code and name");
    scanf("%d %s",&x.code,&x.name);
    return x;
}