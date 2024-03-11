//multiply of the matrix
#include <stdio.h>
#define N 10
main()
{
    int a[N][N], b[N][N], c[N][N], i, j, k, sum, m, n, p, q;
    printf("enter row and column for first matrix\n");
    scanf("%d%d", &m, &n);
    printf("enter first matrix\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter row and column for second matrix\n");
    scanf("%d%d", &p, &q);
    printf("enter second matrix\n");

    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n first matrix is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n second matrix is \n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    if (m == q)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for (k = 0; k <= m; k++)
                {
                    (sum = sum + a[i][k] * b[k][j]);
                }
                c[i][j] = sum;
                // scanf ("%d",&a[i][j]);
            }
        }
        printf("multiplication is \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("no print");
}
/*output
enter row and column for first matrix
2
3
enter first matrix
1
2
3
4
5
6
enter row and column for second matrix
3
2
enter second matrix
1
2
3
4
5
6

 first matrix is
1       2       3
4       5       6

 second matrix is
1       2
3       4
5       6
multiplication is
22      28
49      64

Process returned 0 (0x0)   execution time : 19.871 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    int a[2][3], b[3][2], c[0][0], i, j, k, sum;
    printf("enter first matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter second matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("first matrix is \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("multiply of the matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
/*output
enter row and column for first matrix
2
3
enter first matrix
1
2
3
4
5
6
enter row and column for second matrix
3
2
enter second matrix
1
2
3
4
5
6

 first matrix is
1       2       3
4       5       6

 second matrix is
1       2
3       4
5       6
multiplication is
22      28
49      64

Process returned 0 (0x0)   execution time : 19.871 s
Press any key to continue.
*/