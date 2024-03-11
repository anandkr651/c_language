#include <stdio.h>
int sum(int, int);
void main()
{
    int s = 0;
    int (*ptr)(int, int) = &sum;
    s = (*ptr)(2, 3);
    printf("%d", s);
}
int sum(int a, int b)
{
    return a + b;
}
/*output
5
Process returned 1 (0x1)   execution time : 0.058 s
Press any key to continue.
*/

#include <stdio.h>
int sum(int, int);
void main()
{
    int s = 0;
    int (*ptr)(int, int) = sum;
    s = (ptr)(2, 3);
    printf("%d", s);
}
int sum(int a, int b)
{
    return a + b;
}
/*output
5
Process returned 1 (0x1)   execution time : 0.056 s
Press any key to continue.
*/