#include <stdio.h>
main()
{
    int x = 1, p = 1;
bscmath:
    if (x % 2 == 1)
    {
        p = p * x;
        printf("%d\n", x);
    }
    x++;
    if (x <= 10)
    {
        goto bscmath;
    }
    printf("%d", p);
}
/*
1
3
5
7
9
945
Process returned 0 (0x0)   execution time : 0.065 s
Press any key to continue.
*/
