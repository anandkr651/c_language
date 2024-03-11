#include <stdio.h>
main()
{
    int l, b;
    printf("enter length and breadth");
    scanf("%d%d", &l, &b);
    if (l == b)
        printf("area is %d", l * b);
    else
        printf("perimeter is %d", 2 * (l + b));
}
/*output
enter length and breadth8
6
perimeter is 28
Process returned 0 (0x0)   execution time : 9.184 s
Press any key to continue.
*/