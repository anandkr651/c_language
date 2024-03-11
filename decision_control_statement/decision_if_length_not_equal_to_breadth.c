#include <stdio.h>
main()
{
    int l, b, a;
    printf("enter length and breadth");
    scanf("%d%d", &l, &b);
    a = l * b;
    if (l != b)
        printf("area of rectangle %d", a);
}
/*output
enter length and breadth5
4
area of rectangle 20
Process returned 0 (0x0)   execution time : 3.461 s
Press any key to continue.
*/