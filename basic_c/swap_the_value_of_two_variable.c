#include <stdio.h>
main()
{
    int x, y, t;
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    printf("x is %d \ny is %d\n", x, y);
    t = x;
    x = y;
    y = t;
    printf("\n after interchange \n");
    printf("x is %d\ny is %d", x, y);
}
/*
enter two no.6
8
x is 6
y is 8

 after interchange
x is 8
y is 6
Process returned 0 (0x0)   execution time : 3.225 s
Press any key to continue.*/