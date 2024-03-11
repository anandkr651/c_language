#include <stdio.h>
main()
{
    int x = 10, y = 15, z = 12;
    printf("%d\t%d\t%d\t%d\t%d\t%d\n", x<y, x> y, x <= z, x >= z, x == z, x != z);
    printf("%d\t%d\n", x == 10, y != 15);
}
/*
1       0       1       0       0       1
1       0

Process returned 0 (0x0)   execution time : 0.056 s
Press any key to continue.*/