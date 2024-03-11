#include <stdio.h>
main()
{
    int x, d, s = 0;
    printf("enter a no.");
    scanf("%d", &x);
    while (x > 0)
    {
        d = x % 10;
        s = s + d;
        x = x / 10;
    }
    printf("sum of digit =%d", s);
}
/*
enter a no.556
sum of digit =16
Process returned 0 (0x0)   execution time : 2.689 s
Press any key to continue.*/