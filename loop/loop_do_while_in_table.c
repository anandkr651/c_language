#include <stdio.h>
main()
{
    int x, i = 1, a;
    printf("enter a no.");
    scanf("%d", &x);
    do
    {
        a = x * i;
        printf("%d*%d =%d\n", x, i, a);
        i++;
    } while (i <= 10);
}

/*enter a no.6
6*1 =6
6*2 =12
6*3 =18
6*4 =24
6*5 =30
6*6 =36
6*7 =42
6*8 =48
6*9 =54
6*10 =60

Process returned 0 (0x0)   execution time : 2.569 s
Press any key to continue.
*/