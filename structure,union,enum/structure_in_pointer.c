#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
void main()
{
    struct student s1={1,"jenny",90.91};
    struct student *ptr=&s1;
    printf("info for s1");
    printf("\n %d %s %f",ptr->rollno,ptr->name,ptr->marks);
    printf("\n %d %s %f",(*ptr).rollno,ptr->name,ptr->marks);
}
/*
info for s1
 1 jenny 90.910004
 1 jenny 90.910004
Process returned 19 (0x13)   execution time : 0.062 s
Press any key to continue.*/
