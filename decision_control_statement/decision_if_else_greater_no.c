#include <stdio.h>
main()
{
    int x, y;
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    if (x > y)
        printf("%d is greater no.", x);
    else
        printf("%d is greater no.", y);
}
/*output
enter two no.67
89
89 is greater no.
Process returned 0 (0x0)   execution time : 11.030 s
Press any key to continue.
*/
