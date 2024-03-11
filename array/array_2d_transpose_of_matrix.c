// transpose of matrix
#include <stdio.h>
main()
{
    int a[2][3], i, j;
    printf("enter the number");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf(" matrix the number\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("transpose of matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}
/*output
enter the number1
2
3
4
5
6
 matrix the number
1       2       3
4       5       6
transpose of matrix
1       4
2       5
3       6

Process returned 0 (0x0)   execution time : 12.105 s
Press any key to continue
*/

#include <stdio.h>
main()
{
    int a[3][3], i, j, t;
    printf("enter the number");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf(" matrix the number\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            if (i < j)
            {
                t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
    }
    printf("transpose of matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
/*output
enter the number1
2
3
4
5
6
7
8
9
 matrix the number
1       2       3
4       5       6
7       8       9
transpose of matrix
1       4       7
2       5       8
3       6       9

Process returned 0 (0x0)   execution time : 7.715 s
Press any key to continue.
*/