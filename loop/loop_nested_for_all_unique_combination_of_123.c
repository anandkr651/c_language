#include <stdio.h>
main()
{
    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                if (i != j && j != k && k != i)
                    printf("%d%d%d\n", i, j, k);
            }
        }
    }
}

/*
123
132
213
231
312
321

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
