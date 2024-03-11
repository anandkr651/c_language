#include <stdio.h>
void count(int n)
{
    static int d = 1;
    printf("%d", n);
    printf("%d", d);
    d++;
    if (n > 1)
        count(n - 1);
    printf("%d", d);
}
void main()
{
    count(3);
}
/*
312213444
Process returned 1 (0x1)   execution time : 0.059 s
Press any key to continue.*/