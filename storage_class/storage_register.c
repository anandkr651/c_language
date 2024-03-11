#include <stdio.h>
main()
{
    register int i, sum = 0;
    for (i = 0; i < 9; i++)
        sum = sum + i;
    printf("%d", sum);
}
/*
36
Process returned 0 (0x0)   execution time : 0.056 s
Press any key to continue.*/
