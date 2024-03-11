#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 3)
                break;
            printf("%d%d\n", i, j);
        }
    }
}

/*
11
12
21
22
31
32
41
42
51
52

Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d%d\n", i, j);
            if (j == 3)
                break;
        }
    }
}

/*
11
12
13
21
22
23
31
32
33
41
42
43
51
52
53

Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d%d\n", i, j);
            if (i == 3)
                break;
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

#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
            break;
        for (j = 1; j <= 5; j++)
        {
            if (j == 3)
                break;
            printf("%d%d\n", i, j);
        }
    }
}

/*
11
12
21
22

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
