#include <stdio.h>
main()
{
    int x;
    for (x = 1; x < 10; x++)
    {
        if (x == 5)
            break;
        printf("%d\n", x);
    }
}

/*
1
2
3
4

Process returned 0 (0x0)   execution time : 0.057 s
Press any key to continue.
*/
