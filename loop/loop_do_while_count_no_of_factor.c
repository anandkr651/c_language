#include <stdio.h>
main()
{
    int x, m = 0, i = 1;
    printf("enter a no.");
    scanf("%d", &x);
    do
    {
        if (x % i == 0)
        {
            printf("%d\n", i);
            m++;
        }
        i++;
    } while (x >= i);
    printf("no of factor %d", m);
}
/*
enter a no.6
1
2
3
6
no of factor 4
Process returned 0 (0x0)   execution time : 3.208 s
Press any key to continue.
*/