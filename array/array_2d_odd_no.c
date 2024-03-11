//product of all odd number in the matrix
#include <stdio.h>
main()
{
    int x[2][3], i, j, p = 1;
    printf("enter the no.");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("number are\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", x[i][j]);
        printf("\n");
    }
    printf("odd number are\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            if (x[i][j] % 2 == 1)
            {
                printf("%d\t", x[i][j]);
                p = p * x[i][j];
            }
        printf("\n");
    }
    printf("%d product is", p);
}

/*output
enter the no.1
2
3
4
5
6
number are
1       2       3
4       5       6
odd number are
1       3
5
15 product is
Process returned 0 (0x0)   execution time : 5.124 s
Press any key to continue.
*/

//sum of all the odd number in the matrix
#include <stdio.h>
main()
{
    int x[2][3], i, j, s = 0;
    printf("enter the no.");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("number are\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", x[i][j]);
        printf("\n");
    }
    printf("odd number are\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            if (x[i][j] % 2 == 1)
            {
                printf("%d\t", x[i][j]);
                s = s + x[i][j];
            }
        printf("\n");
    }
    printf("%d sum is", s);
}
/*output
enter the no.1
2
3
4
5
6
number are
1       2       3
4       5       6
odd number are
1       3
5
9 sum is
Process returned 0 (0x0)   execution time : 5.124 s
Press any key to continue.*/
