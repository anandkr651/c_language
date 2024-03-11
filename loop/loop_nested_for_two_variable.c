#include <stdio.h>
main()
{
    int i, j;
    for (i = 1, j = 10; i <= 10 && j >= 1; i++, j--)
    {
        printf("%d  %d\n", i, j);
    }
}

/*
1  10
2  9
3  8
4  7
5  6
6  5
7  4
8  3
9  2
10  1

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    int i, j;
    for (i = 1, j = 10; i <= 10, j >= 1; i++, j--)
    {
        printf("%d  %d\n", i, j);
    }
}

/*
1  10
2  9
3  8
4  7
5  6
6  5
7  4
8  3
9  2
10  1

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    int i, j;
    for (i = 1, j = 10; i <= 10, j >= 1; i++)
    {
        printf("%d  %d\n", i, j);
    }
}

/*
i printing infinite times j printing 10 always
*/

#include <stdio.h>
main()
{
    int i, j;
    for (i = 1, j = 0; i <= 10 || j < 3; i++, j++)
    {
        printf("%d  %d\n", i, j);
    }
}

/*
1  0
2  1
3  2
4  3
5  4
6  5
7  6
8  7
9  8
10  9
Process returned 0 (0x0)   execution time : 0.156 s
Press any key to continue.
*/
