#include <stdio.h>
main()
{
    int x, s = 0, d, t, p = 1;
    printf("enter a no.");
    scanf("%d", &x);
    t = x;
    for (; x > 0;)
    {
        d = x % 10;
        s = s + d;
        p = p * d;
        x = x / 10;
    }
    if (s == p)
        printf("spy is %d", t);
    else
        printf(" not spy");
}

/*
enter a no.1421
spy is 1421
Process returned 0 (0x0)   execution time : 2.804 s
Press any key to continue.
*/