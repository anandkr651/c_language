#include <stdio.h>
main()
{
    int i = 1, p = 1;
    while (i <= 10)
    {
        p = p * i;
        printf("%d\n", i);
        i++;
    }
    printf("product =%d", p);
}
/*
1
2
3
4
5
6
7
8
9
10
product =3628800
Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.*/
