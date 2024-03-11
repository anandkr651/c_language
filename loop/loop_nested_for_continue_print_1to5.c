#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 3)
                continue;
            printf("%d%d\n", i, j);
        }
    }
}

/*
11
12
14
15
21
22
24
25
31
32
34
35
41
42
44
45
51
52
54
55

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
            if (i == 3)
                continue;
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
            continue;
        for (j = 1; j <= 5; j++)
        {
            if (j == 3)
                continue;
            printf("%d%d\n", i, j);
        }
    }
}
/*
11
12
14
15
21
22
24
25
41
42
44
45
51
52
54
55

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
                continue;
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
#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
            continue;
        for (j = 1; j <= 5; j++)
        {
            if (j == 3)
                continue;
            printf("%d%d\n", i, j);
        }
    }
}
/*
11
12
14
15
21
22
24
25
41
42
44
45
51
52
54
55

Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.
*/