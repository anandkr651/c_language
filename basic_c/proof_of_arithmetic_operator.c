#include <stdio.h>
main()
{
    int x = 15, y = 2;
    printf("%d\t%d\t%d\t%d\t%d\n", x + y, x - y, x * y, x / y, x % y);
    printf("%f\t%f\t%f\n", 15.0 / 2, 15 / 2.0, 15.0 / 2.0);
    printf("%d\t%d\t%d\n", -15 % 2, 15 % -2, -15 % -2);
}
/*
17      13      30      7       1
7.500000        7.500000        7.500000
-1      1       -1

Process returned 0 (0x0)   execution time : 0.060 s
Press any key to continue.*/
