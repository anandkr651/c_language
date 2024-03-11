#include <stdio.h>
main()
{
    int x = 1;
bscmath:
    if (x % 2 == 0)
        printf("%d\n", x);
    x++;
    if (x <= 30)
    {
        goto bscmath;
    }
}

/*
2
4
6
8
10
12
14
16
18
20
22
24
26
28
30

Process returned 0 (0x0)   execution time : 0.064 s
Press any key to continue.
*/
