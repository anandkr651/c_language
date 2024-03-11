#include <stdio.h>
void display(int n)
{
    if (n < 1)
        return;
    else
    {
        printf("%d", n);
        display(n - 1);
        printf("%d", n);
    }
}
void main()
{
    int n = 3;
    display(n);
}
/*
321123
Process returned 1 (0x1)   execution time : 0.059 s
Press any key to continue.*/

#include <stdio.h>
int sum(int x)
{
    int s = 0;
    if (x == 1)
        return x;
    s = x + sum(x - 1);
    return s;
}
void main()
{
    int a;
    a = sum(5);
    printf("%d", a);
}
/*15
Process returned 2 (0x2)   execution time : 0.056 s
Press any key to continue.*/

#include <stdio.h>
int fun2(int);
int fun1(int);
void main()
{
    printf("%d", fun1(5));
}
int fun1(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fun2(n - 1);
}
int fun2(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fun1(n - 1);
}
/*120
PS C:\Users\DELL\OneDrive\Desktop\c_language> */

#include <stdio.h>
void print(int a)
{
    if (a < 1)
        return;
    else
        printf("%d", a);
    print(a / 2);
}
void main()
{
    print(10);
}
/*
10521
Process returned 0 (0x0)   execution time : 0.058 s
Press any key to continue.*/

#include <stdio.h>
void print(int a)
{
    if (a < 1)
        return;
    else
        printf("%d", a);
    print(a / 2);
    printf("%d", a);
}
void main()
{
    print(10);
}
/*
1052112510
Process returned 2 (0x2)   execution time : 0.050 s
Press any key to continue.*/

#include <stdio.h>
int prt(int a)
{
    if (a < 1)
        return;
    else
        return 1 + prt(a / 2);
}
void main()
{
    int x;
    x = prt(10);
    printf("%d", x);
}
/*4
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/