#include <stdio.h>
main()
{
    int x = 1, p = 1;
    do
    {
        printf("%d\n", x);
        p = p * x;
        x++;
    } while (x <= 10);
    printf("%d", p);
}

/*
1
2
3
4
5
6
7
8
9
10
3628800
Process returned 0 (0x0)   execution time : 0.070 s
Press any key to continue.
*/