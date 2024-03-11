#include <stdio.h>
main()
{
    int x, i = 2;
    printf("enter a no.");
    scanf("%d", &x);
    do
    {
        if (x % i == 0)
        {
            printf("not prime no.");
            break;
        }
        i++;
    } while (x > i);
    if (x == i)
        printf("prime no %d", x);
}

/*
enter a no.78
not prime no.
Process returned 0 (0x0)   execution time : 2.702 s
Press any key to continue.
*/