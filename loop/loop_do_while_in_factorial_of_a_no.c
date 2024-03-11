#include <stdio.h>
main()
{
    int x, p = 1;
    printf("enter a no.");
    scanf("%d", &x);
    do
    {
        p = p * x;
        printf("%d\n", x);
        x--;
    } while (x >= 1);
    printf("factorial = %d", p);
}

/*
enter a no.5
5
4
3
2
1
factorial = 120
Process returned 0 (0x0)   execution time : 2.370 s
Press any key to continue.
*/
