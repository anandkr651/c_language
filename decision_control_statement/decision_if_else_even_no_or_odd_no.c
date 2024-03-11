#include <stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("no is even %d", x);
    else
        printf("no is odd %d", x);
}
/*output
enter a no.583
no is odd 583
Process returned 0 (0x0)   execution time : 6.893 s
Press any key to continue.
*/
