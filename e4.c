//ex4//
#include<stdio.h>
enum months{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
main()
{
    enum months m;
    m=apr;
    system("cls");
    printf("The value of month apr=%d",m);
}