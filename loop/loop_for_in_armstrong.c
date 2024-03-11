#include <stdio.h>
main()
{
    int x, s = 0, d, t;
    printf("enter a no.");
    scanf("%d", &x);
    t = x;
    for (; x > 0;)
    {
        d = x % 10;
        s = s + d * d * d;
        x = x / 10;
    }
    if (s == t)
        printf(" armstrong is %d", s);
    else
        printf(" not armstrong");
}
/*
enter a no.133
 not armstrong
Process returned 0 (0x0)   execution time : 6.388 s
Press any key to continue.
*/
