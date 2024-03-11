#include <stdio.h>
main()
{
    int x, i = 1, a;
    printf("enter a no.");
    scanf("%d", &x);
    while (i <= 10)
    {
        a = x * i;
        printf("%d*%d =%d\n", x, i, a);
        i++;
    }
}
/*enter a no.7
7*1 =7
7*2 =14
7*3 =21
7*4 =28
7*5 =35
7*6 =42
7*7 =49
7*8 =56
7*9 =63
7*10 =70

Process returned 0 (0x0)   execution time : 2.445 s
Press any key to continue.*/
