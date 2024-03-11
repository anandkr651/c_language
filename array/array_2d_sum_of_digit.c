// sum of digit
#include <stdio.h>
main()
{
    int x[2][3], i, j, s, d, num;
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
    printf("sum of digit\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s = 0;
            num = x[i][j];
            while (num > 0)
            {
                d = num % 10;
                s = s + d;
                num = num / 10;
            }
            printf("%d", x[i][j]);
            printf("sum %d\n", s);
        }
    }
}

/*output
enter the element12
45
32
67
87
34
matrix are
12      45      32
67      87      34
sum of digit
12sum 3
45sum 9
32sum 5
67sum 13
87sum 15
34sum 7

Process returned 0 (0x0)   execution time : 11.379 s
Press any key to continue.
*/