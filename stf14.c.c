//Create a structure student having member rno,course,fees pass this structure to print the structure.//
#include<stdio.h>
#include<string.h>
struct student
{
    int sturno;
    char stuname[10];
    char coursename[10];
    int  coursefess;
};
void printstudent(struct student stu1);
int main()
{
    struct student stu1;
    stu1.sturno=41;
    strcpy(stu1.stuname,"Ketan");
    strcpy(stu1.coursename,"C lan");
    stu1.coursefess=3500;
    system("cls");
    printstudent(stu1);
}

void printstudent(struct student stu1)
{
    printf("\n-------Students Details are-------");
    printf("\nStudent rno=%d",stu1.sturno);
    printf("\nStudent stuname=%s",stu1.stuname);
    printf("\nStudent coursename=%s",stu1.coursename);
    printf("\nStudent coursefees=%d",stu1.coursefess);
}


