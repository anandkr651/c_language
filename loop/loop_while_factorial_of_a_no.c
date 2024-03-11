#include <stdio.h>
main()
{
    int i, p = 1;
    printf("enter a no.");
    scanf("%d", &i);
    while (i >= 1)
    {
        p = p * i;
        printf("%d\n", i);
        i--;
    }
    printf("factorial of a no is %d", p);
}
/*
enter a no.5
5
4
3
2
1
factorial of a no is 120
Process returned 0 (0x0)   execution time : 4.606 s
Press any key to continue.*/