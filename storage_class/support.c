#include<stdio.h>
void display()
{
    extern int x;
    x++;
    printf("hello the world");
    printf("\nx=%d",x);
}
