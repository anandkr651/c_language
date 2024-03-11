#include <stdio.h>
int jumble(int x, int y)
{
    x = 2 * x + y;
    return x;
}
int main()
{
    int x = 2, y = 5;
    y = jumble(y, x);
    x = jumble(y, x);
    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}
/*output
26
12
Process returned 0 (0x0)   execution time : 0.063 s
Press any key to continue.
*/