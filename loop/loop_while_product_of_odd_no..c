#include <stdio.h>
main()
{
    int i = 10, p = 1;
    while (i >= 1)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
            p = p * i;
        }
        i--;
    }
    printf("product of odd no, %d", p);
}
/*
9
7
5
3
1
product of odd no, 945
Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.*/
