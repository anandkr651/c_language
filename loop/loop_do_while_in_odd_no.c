#include <stdio.h>
main()
{
    int x = 1;
    do
    {
        if (x % 2 == 1)
            printf("%d\n", x);
        x++;
    } while (x <= 30);
}

/*
1
3
5
7
9
11
13
15
17
19
21
23
25
27
29

Process returned 0 (0x0)   execution time : 0.069 s
Press any key to continue.
*/