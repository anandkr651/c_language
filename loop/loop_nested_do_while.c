#include <stdio.h>
main()
{
    int i = 1, j = 3;
    do
    {
        do
        {
            printf("%d", j);
            j--;
        } while (j > 0);
        i++;
        printf("%d", i);
    } while (i < 4);
}

/*
321203-14
Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
