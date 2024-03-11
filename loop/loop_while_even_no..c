#include <stdio.h>
main()
{
    int i = 0;
    while (i <= 30)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
        i++;
    }
    printf("all are even no.");
}
/*
0
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
all are even no.
Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.
*/
