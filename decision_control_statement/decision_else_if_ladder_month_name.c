#include <stdio.h>
main()
{
    int m;
    printf("enter month no.");
    scanf("%d", &m);
    if (m == 1)
        printf("january");
    else if (m == 2)
        printf("february");
    else if (m == 3)
        printf("march");
    else if (m == 4)
        printf("april");
    else if (m == 5)
        printf("may");
    else if (m == 6)
        printf("june");
    else if (m == 7)
        printf("july");
    else if (m == 8)
        printf("august");
    else if (m == 9)
        printf("september");
    else if (m == 10)
        printf("october");
    else if (m == 11)
        printf("november");
    else if (m == 12)
        printf("december");
    else
        printf("invalid month no.");
}
/*output
enter month no.9
september
Process returned 0 (0x0)   execution time : 3.341 s
Press any key to continue.
*/