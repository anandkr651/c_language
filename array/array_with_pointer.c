//sum of element using pointer
#include <stdio.h>
main()
{
    int x[5], i, s = 0;
    printf("enter 5 element");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", x + i);
    }
    printf("element are\n");
    for (i = 0; i < 5; i++)
    {
        s = *(x + 2) + *(x + 4);
        printf("%d\n", *(x + i));
    }
    printf("sum is %d", s);
}
/*output
enter 5 element1
2
3
4
5
element are
1
2
3
4
5
sum is 8
Process returned 0 (0x0)   execution time : 5.723 s
Press any key to continue.
*/
