#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d%d\n", i, j);
        }
    }
}

/*
11
12
13
14
15
21
22
23
24
25
31
32
33
34
35
41
42
43
44
45
51
52
53
54
55

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
