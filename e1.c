//Lets create simple program of enum//
#include<stdio.h>
enum weekdays{monday=1,tuesdsy,wedneday,thursday,friday,saturday,sunday};
main()
{
    enum weekdays w;
    w=monday;
    system("cls");
    printf("The value of w=%d",w);

}