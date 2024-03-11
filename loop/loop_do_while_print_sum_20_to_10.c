#include <stdio.h>
main()
{
    int x = 20, s = 0;
    do
    {
        printf("%d\n", x);
        s = s + x;
        x--;
    } while (x >= 10);
    printf("%d", s);
}

/*
20
19
18
17
16
15
14
13
12
11
10
165
Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.
*/