#include <stdio.h>
main()
{
    int i = 0, j = 1;
    while (i < 3)
    {
        while (j <= 3)
        {
            printf("%d", j++);
        }
        printf("%d", i++);
    }
}

/*
123012
Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
