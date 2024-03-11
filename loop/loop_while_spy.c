#include <stdio.h>
main()
{
    int x, d, s = 0, p = 1, t;
    printf("enter a no.");
    scanf("%d", &x);
    t = x;
    while (x > 0)
    {
        d = x % 10;
        s = s + d;
        p = p * d;
        x = x / 10;
    }
    if (s == p)
        printf("%d is spy", t);
    else
        printf("%d is not spy", t);
}
/*
enter a no.7686
7686 is not spy
Process returned 0 (0x0)   execution time : 3.350 s
Press any key to continue.*/
