#include <stdio.h>
main()
{
    int i = 2, x;
    printf("enter a no.");
    scanf("%d", &x);
    while (i < x)
    {
        if (x % i == 0)
        {
            printf("not prime no.");
            break;
        }
        i++;
    }
    if (i == x)
        printf("prime no.");
}
/*
enter a no.17
prime no.
Process returned 0 (0x0)   execution time : 4.196 s
Press any key to continue.*/
