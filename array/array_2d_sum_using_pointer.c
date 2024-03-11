// sum of element of matrix using pointer
#include <stdio.h>
main()
{
    int x[2][3], i, j, s = 0;
    printf("enter the elements\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", *(x + i) + j);
    }
    printf("all element are\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(x + i) + j));
            s = s + *(*(x + i) + j);
        }
        printf("\n");
    }
    printf("sum=%d", s);
}
/*output
enter the elements
1
2
3
4
5
6
all element are
1       2       3
4       5       6
sum=21
Process returned 0 (0x0)   execution time : 5.858 s
Press any key to continue.
*/