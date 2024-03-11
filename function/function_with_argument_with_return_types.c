#include <stdio.h>
int sum(int, int);
void main()
{
    int x, y, c;
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    c = sum(x, y);
    printf("sum=%d", c);
}
int sum(int a, int b)
{
    int s = 0;
    s = a + b;
    return s;
}
/*
enter two no.6
7
sum=13
Process returned 6 (0x6)   execution time : 6.262 s
Press any key to continue.
*/