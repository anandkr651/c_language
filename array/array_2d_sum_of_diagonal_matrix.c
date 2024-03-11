// sum of diagonal
#include <stdio.h>
main()
{
    int x[3][3], i, j, s = 0;
    printf("enter the no.");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", x[i][j]);
        printf("\n");
    }
    printf("diagonal matrix are\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            if (i == j)
            {
                printf("%d\t", x[i][j]);
                s = s + x[i][j];
            }
        printf("\n");
    }
    printf("sum of diagonal %d", s);
}
/*output
enter the no.1
2
3
4
5
6
7
8
9
matrix is
1       2       3
4       5       6
7       8       9
diagonal matrix are
1
5
9
sum of diagonal 15
Process returned 0 (0x0)   execution time : 13.497 s
Press any key to continue.
*/