#include <stdio.h>
main()
{
    int x, y;
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    if (*(&x) > *(&y))
        printf("%d is greater", *(&x));
    else
        printf("%d is greater", *(&y));
}
/*
enter two no.65
09
65 is greater
Process returned 0 (0x0)  execution time : 4.548 s
Press any key to continue.*/