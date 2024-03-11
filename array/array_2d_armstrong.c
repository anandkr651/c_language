/*armstrong of the matrix */
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
    printf("armstrong no.\n");
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
                s = s + d * d * d;
                num = num / 10;
            }
            if (s == t)
            {
                printf("%d", x[i][j]);
                printf("armstrong no %d\n", s);
            }
        }
    }
}

/*output
enter the element153
34
5
6
7
2
matrix are
153     34      5
6       7       2
armstrong no.
153armstrong no 153

Process returned 0 (0x0)   execution time : 11.180 s
Press any key to continue.
*/