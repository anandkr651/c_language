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
    printf("niven no.\n");
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
                s = s + d;
                num = num / 10;
            }
            if (t % s == 0)
            {
                printf("%d", x[i][j]);
                printf("niven no %d\n", s);
            }
        }
    }
}
/*output
enter the element217
332
234
236
829
198
matrix are
217     332     234
236     829     198
niven no.
234niven no 9
198niven no 18

Process returned 0 (0x0)   execution time : 16.929 s
Press any key to continue.
*/