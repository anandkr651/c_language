#include <stdio.h>
main()
{
    int x = 10, y = 15, z = 12, m = -15;
    printf("%d\t%d\t%d\n", x < y && y > z, x < y && y<z, x> y && y > z);
    printf("%d\t%d\t%d\n", x > y || y < z, x < y || y < z, x < y || y > z);
    printf("%d\t%d\t%d\t%d\n", !0, !1, !x, !m);
}
/*
1       0       0
0       1       1
1       0       0       0

Process returned 0 (0x0)   execution time : 0.056 s
Press any key to continue.*/