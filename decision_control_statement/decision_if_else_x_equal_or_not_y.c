#include <stdio.h>
main()
{
    int x, y;
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    if (x != y)
        printf("product is %d", x * y);
    else
        printf("sum is %d", x + y);
}

/*output
enter two no.89
34
product is 3026
Process returned 0 (0x0)   execution time : 8.049 s
Press any key to continue.
*/