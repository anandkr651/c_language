#include <stdio.h>
void f(int *p, int m)
{
    m = m + 5;
    *p = *p + m;
    return;
}
void main()
{
    int i = 5, j = 10;
    f(&i, j);
    printf("%d %d\n", i, j);
    printf("%d", i + j);
}

/*
20 10
30
Process returned 2 (0x2)   execution time : 0.058 s
Press any key to continue.
*/
