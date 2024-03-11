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
        s = s * 10 + d;
        x = x / 10;
    }
    if (s == t)
        printf("%d is panlindrome", t);
    else
        printf("%d is not panlindrome", t);
}
/*
enter a no.768
768 is not panlindrome
Process returned 0 (0x0)   execution time : 4.122 s
Press any key to continue.*/
