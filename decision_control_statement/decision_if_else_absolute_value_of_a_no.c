#include <stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d", &x);
    if (x < 0)
        printf("absolute value is %d", -1 * x);
    else
        printf("absolute value is %d", x);
}
/*output
enter a no.-15
absolute value is 15
Process returned 0 (0x0)   execution time : 6.252 s
Press any key to continue.
*/