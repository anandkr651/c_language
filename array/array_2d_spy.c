// spy of the number
#include <stdio.h>
main()
{
    int x[2][3], i, j, s, d, num, p;
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
    printf("spy no.\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s = 0;
            num = x[i][j];
            p = 1;
            while (num > 0)
            {
                d = num % 10;
                s = s + d;
                p = p * d;
                num = num / 10;
            }
            if (s == p)
            {
                printf("%d", x[i][j]);
                printf("spy no %d\n", x[i][j]);
            }
        }
    }
}
/*output
enter the element1412
1241
561
187
7829
2199
matrix are
1412    1241    561
187     7829    2199
spy no.
1412spy no 1412
1241spy no 1241

Process returned 0 (0x0)   execution time : 133.187 s
Press any key to continue.
*/