#include <stdio.h>
main()
{
    int x, i;
    printf("enter a no.");
    scanf("%d", &x);
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("not prime no.");
            break;
        }
    }
    if (x == i)
        printf(" prime no.");
}

/*
enter a no.17
 prime no.
Process returned 0 (0x0)   execution time : 3.149 s
Press any key to continue.
*/