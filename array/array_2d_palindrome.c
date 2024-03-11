//panlindrome number
#include <stdio.h>
main()
{
    int x[2][3], i, j, s, d, num, t;
    printf("enter the element");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &x[i][j]);
    }
    printf("matrix are\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", x[i][j]);
        printf("\n");
    }
    printf("panlindrome number\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s = 0;
            num = x[i][j];
            t = x[i][j];
            while (num > 0)
            {
                d = num % 10;
                s = s * 10 + d;
                num = num / 10;
            }
            if (s == t)
            {
                printf("%d", x[i][j]);
                printf("panlindrome %d\n", s);
            }
        }
    }
}

/*output
enter the element121
567
786
535
678
232
matrix are
121     567     786
535     678     232
panlindrome number
121panlindrome 121
535panlindrome 535
232panlindrome 232

Process returned 0 (0x0)   execution time : 71.608 s
Press any key to continue.
*/