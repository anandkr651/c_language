#include <stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d", &x);
    if (x % 5 == 0)
        printf("divisible by 5 is %d", x);
}
/*output
enter a no.90
divisible by 5 is 90
Process returned 0 (0x0)   execution time : 4.167 s
Press any key to continue.
*/
