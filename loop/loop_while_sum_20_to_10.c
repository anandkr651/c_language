#include <stdio.h>
main()
{
    int i = 20, sum = 0;
    while (i >= 10)
    {
        sum = sum + i;
        printf("%d\n", i);
        i--;
    }
    printf("sum= %d", sum);
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
sum= 165
Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.*/
