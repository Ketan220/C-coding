//Two enum having same scope but then these two enums should have different enum names otherwise complier will throw an error//
#include<stdio.h>
enum status{sucess,failed};
enum boolean{fail,pass};
void main()
{
    system("cls");
    printf("The value of sucess is=%d",sucess);
}