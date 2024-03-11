#include <stdio.h>
main()
{
    int x, y, s, *p1, *p2, *p3;
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    p1 = &x;
    p2 = &y;
    p3 = &s;
    *p3 = *p1 + *p2;
    printf("sum is %d", s);
}

/*
enter two no.5
9
sum is 14
Process returned 0 (0x0)   execution time : 3.263 s
Press any key to continue.*/

#include <stdio.h>
main()
{
    int x, y, s;
    printf("enter two no");
    scanf("%d%d", &x, &y);
    *(&s) = *(&x) + *(&y);
    printf("sum is %d", *(&s));
}

/*enter two no4
5
sum is 9
Process returned 0 (0x0)   execution time : 3.643 s
Press any key to continue.*/

#include <stdio.h>
main()
{
    int x, y, s, *p1, *p2, *p3;
    p1 = &x;
    p2 = &y;
    p3 = &s;
    printf("enter two no.");
    scanf("%d%d", p1, p2);
    *p3 = *p1 + *p2;
    printf("sum is %d", s);
}
/*
enter two no.5
8
sum is 13
Process returned 0 (0x0)   execution time : 3.880 s
Press any key to continue.
*/