#include <stdio.h>
main()
{
    int x, y, z, p;
    printf("enter three no.");
    scanf("%d%d%d", &x, &y, &z);
    p = x * y * z;
    if (x == z)
        printf("product is %d", p);
}
/*
enter three no.14
67
14
product is 13132
Process returned 0 (0x0)   execution time : 7.627 s
Press any key to continue.
*/