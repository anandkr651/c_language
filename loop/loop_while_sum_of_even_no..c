#include <stdio.h>
main()
{
    int i = 20, sum = 0;
    while (i <= 40)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
        i++;
    }
    printf("sum =%d", sum);
}
/*
20
22
24
26
28
30
32
34
36
38
40
sum =330
Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/