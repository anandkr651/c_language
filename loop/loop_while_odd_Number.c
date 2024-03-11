#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 30)
    {
        if (i % 2 == 1)
            printf("%d\n", i);
        i++;
    }
    printf("all are odd no.");
    return 0;
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
all are odd no.
Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
