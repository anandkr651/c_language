//sum of element of the matrix
#include <stdio.h>
main()
{
    int a[2][3], i, j, sum = 0;
    printf("enter a number");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("number are\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("sum=%d", sum);
}
/*enter a number1
2
3
4
5
6
number are
1       2       3
4       5       6
sum=21
PS C:\Users\DELL\OneDrive\Documents>*/