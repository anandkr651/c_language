#include <stdio.h>
main()
{
    int x, y, p = 1;
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    while (y >= 1)
    {
        p = p * x;
        y--;
    }
    printf("power of is %d", p);
}
/*
enter two no.5
2
power of is 25
Process returned 0 (0x0)   execution time : 4.840 s
Press any key to continue.*/
