/*addition of matrix*/
#include <stdio.h>
int main()
{
    int x[2][3], y[2][3], z[2][3], i, j;
    printf("enter the first matrix");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("enter the second matrix.");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &y[i][j]);
        }
    }
    printf("first matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", x[i][j]);
        printf("\n");
    }
    printf("second matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", y[i][j]);
        printf("\n");
    }
    printf("addition of matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            z[i][j] = x[i][j] + y[i][j];
            printf("%d\t", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*output
enter the first matrix1
2
3
4
5
6
enter the second matrix.1
2
3
4
5
6
first matrix
1       2       3
4       5       6
second matrix
1       2       3
4       5       6
addition of matrix
2       4       6
8       10      12

Process returned 0 (0x0)   execution time : 21.992 s
Press any key to continue.*/