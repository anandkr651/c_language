#include <stdio.h>
int incre(int i)
{
    static int count = 0;
    count = count + i;
    return (count);
}
main()
{
    int i, j;
    for (i = 0; i <= 4; i++)
        j = incre(i);
    printf("%d\n", j);
}
/*ouput
10

Process returned 0 (0x0)   execution time : 0.056 s
Press any key to continue.
*/