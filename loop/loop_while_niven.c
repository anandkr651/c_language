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
        s = s + d;
        x = x / 10;
    }
    if (t % s == 0)
        printf("%d is niven", t);
    else
        printf("%d is not niven", t);
}
/*
enter a no.21
21 is niven
Process returned 0 (0x0)   execution time : 2.171 s
Press any key to continue.*/
