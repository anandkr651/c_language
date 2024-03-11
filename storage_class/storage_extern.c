#include <stdio.h>
void fun1();
void fun2();
void main()
{
    extern int x;
    printf("x=%d", x);
    fun1();
    fun2();
}
void fun1()
{
    int x = 1;
    x += 5;
    printf("\nx=%d", x);
}
void fun2()
{
    int y = 4;
    y++;
    printf("\nin fun2 y=%d", y);
}
int x=10;
/*
x=10
x=6
in fun2 y=5
Process returned 12 (0xC)   execution time : 0.058 s
Press any key to continue.*/

#include <stdio.h>
#include "support.c"
extern void display();
int x = 10;
void main()
{
    display();
}
/*hello the world
x=11
Process returned 5 (0x5)   execution time : 0.061 s
Press any key to continue.*/
