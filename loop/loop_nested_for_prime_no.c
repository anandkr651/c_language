#include <stdio.h>
main()
{
    int i, j, count;
    for (i = 1; i <= 100; i++)
    {
        count = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && i != 1)
            printf("%d\n", i);
    }
}

/*
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
Process returned 0 (0x0)   execution time : 0.281 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("prime no %d\n", i);
    }
}

/*
prime no 2
prime no 3
prime no 5
prime no 7
prime no 11
prime no 13
prime no 17
prime no 19
prime no 23
prime no 29
prime no 31
prime no 37
prime no 41
prime no 43
prime no 47
prime no 53
prime no 59
prime no 61
prime no 67
prime no 71
prime no 73
prime no 79
prime no 83
prime no 89
prime no 97
Process returned 0 (0x0)   execution time : 0.281 s
Press any key to continue.
*/