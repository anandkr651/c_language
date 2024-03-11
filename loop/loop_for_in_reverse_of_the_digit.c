#include <stdio.h>
main()
{
    int x, s = 0, d;
    printf("enter a no.");
    scanf("%d", &x);
    for (; x > 0;)
    {
        d = x % 10;
        s = s * 10 + d;
        x = x / 10;
    }
    printf("%d", s);
} /*
 enter a no.68978
 87986
 Process returned 0 (0x0)   execution time : 4.696 s
 Press any key to continue.
 */