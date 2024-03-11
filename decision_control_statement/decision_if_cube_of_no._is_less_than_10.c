#include <stdio.h>
main()
{
    int x, c;
    printf("enter a no.");
    scanf("%d", &x);
    c = x * x * x;
    if (x < 10)
        printf("cube is %d", c);
}
/*output
enter a no.7
cube is 343
Process returned 0 (0x0)   execution time : 3.349 s
Press any key to continue.
*/
