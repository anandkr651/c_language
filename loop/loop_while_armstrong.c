#include <stdio.h>
main()
{
    int x, d, s = 0, t;
    printf("enter a no.");
    scanf("%d", &x);
    t = x;
    while (x > 0)
    {
        d = x % 10;
        s = s + d * d * d;
        x = x / 10;
    }
    if (s == t)
        printf("%d is armstrong", t);
    else
        printf("%d is not armstrong", t);
}

/*
enter a no.153
153 is armstrong
Process returned 0 (0x0)   execution time : 6.309 s
Press any key to continue.
*/
