#include <stdio.h>
static char ch;
void display();
void main()
{
    display();
    display();
    printf("\nch=%c", ch);
}
void display()
{
    static int x;
    int y = 10;
    x += 10;
    y--;
    printf("\nx=%d", x);
    printf("\ny=%d", y);
}
/*

x=10
y=9
x=20
y=9
ch=
Process returned 5 (0x5)   execution time : 0.057 s
Press any key to continue.*/

#include <stdio.h>
void display();
void main()
{
    int i;
    for (i = 0; i < 3; i++)
        display();
}
void display()
{
    static int x = 5;
    int y = 5;
    x++;
    y++;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
}
/*
x=6
y=6
x=7
y=6
x=8
y=6

Process returned 4 (0x4)   execution time : 0.058 s
Press any key to continue.*/

#include <stdio.h>
int fun()
{
    static int num = 16;
    return num--;
}
int main()
{
    for (fun(); fun(); fun())
        printf("%d", fun());
    return 0;
}
/*
1411852
Process returned 0 (0x0)   execution time : 0.058 s
Press any key to continue.*/
