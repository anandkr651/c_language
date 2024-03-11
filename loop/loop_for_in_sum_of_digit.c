#include <stdio.h>
main()
{
    int x, s = 0, d;
    printf("enter a no.");
    scanf("%d", &x);
    for (; x > 0;)
    {
        d = x % 10;
        s = s + d;
        x = x / 10;
    }
    printf("%d", s);
}

/*
enter a no.9785
29
Process returned 0 (0x0)   execution time : 3.056 s
Press any key to continue.
*/