#include <stdio.h>
main()
{
    int x = 10, p = 1;
    do
    {
        if (x % 2 == 1)
        {
            printf("%d\n", x);
            p = p * x;
        }
        x--;
    } while (x >= 1);
    printf("product is %d", p);
}

/*
9
7
5
3
1
product is 945
Process returned 0 (0x0)   execution time : 0.064 s
Press any key to continue.
*/