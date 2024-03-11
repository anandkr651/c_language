#include <stdio.h>
main()
{
    int m;
    printf("enter month no.");
    scanf("%d", &m);
    if (m == 1)
        printf("31 days");
    else if (m == 2)
        printf("28 or 29 days");
    else if (m == 3)
        printf("31 days");
    else if (m == 4)
        printf("30 days");
    else if (m == 5)
        printf("31 days");
    else if (m == 6)
        printf("30 days");
    else if (m == 7)
        printf("31 days");
    else if (m == 8)
        printf("31 days");
    else if (m == 9)
        printf("30 days");
    else if (m == 10)
        printf("31 days");
    else if (m == 11)
        printf("30 days");
    else if (m == 12)
        printf("31 days");
    else
        printf("invalid month no.");
}

/*output
enter month no.9
30 days
Process returned 0 (0x0)   execution time : 4.908 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    int m;
    printf("enter a no.");
    scanf("%d", &m);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        printf("31 days");
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        printf("30 days");
    else if (m == 2)
        printf("28 or 29 days");
    else
        printf("invalid month no");
}
/*output
enter a no.7
31 days
Process returned 0 (0x0)   execution time : 1.991 s
Press any key to continue.
*/