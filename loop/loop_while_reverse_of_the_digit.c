#include <stdio.h>
main()
{
    int x, d, s = 0;
    printf("enter a no.");
    scanf("%d", &x);
    while (x > 0)
    {
        d = x % 10;
        s = s * 10 + d;
        x = x / 10;
    }
    printf("reverse of digit =%d", s);
}
/*
enter a no.5667
reverse of digit =7665
Process returned 0 (0x0)   execution time : 3.245 s
Press any key to continue.*/