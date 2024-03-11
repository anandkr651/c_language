#include <stdio.h>
main()
{
    int i = 1, n;
    printf("enter a no.");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}
/*
enter a no.5
1
5

Process returned 0 (0x0)   execution time : 4.086 s
Press any key to continue.*/
