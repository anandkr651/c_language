#include <stdio.h>
main()
{
    int a = 10, b = 9, c;
    int *p, *q;
    p = &a;
    q = &b;
    c = *q;
    printf("value of a = %d\n", a);
    printf("a=%d\n", *p);
    printf("address of a =%x\n", &a);
    printf("address of a =%x\n", p);
    printf("address of p =%x\n", &p);
    printf("c=%d\n", c);
}
/*
value of a = 10
a=10
address of a =61fe10
address of a =61fe10
address of p =61fe00
c=9

Process returned 0 (0x0)   execution time : 0.061 s
Press any key to continue.*/

#include <stdio.h>
main()
{
    int x = 25, *p;
    p = &x;
    printf("%d\n", x);
    printf("%d\n", *p);
    printf("%d\n", *(&x));
    printf("%d\n", **(&p));
    printf("%u\n", &x);
    printf("%u\n", p);
    printf("%u\n", *(&p));
    printf("%u\n", &p);
}
/*
25
25
25
25
6422044
6422044
6422044
6422032

Process returned 0 (0x0)   execution time : 0.045 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    int x = 45, *p, **p1;
    p = &x;
    p1 = &p;
    printf("%d\n", x);
    printf("%d\n", *p);
    printf("%d\n", *(&x));
    printf("%d\n", **(&p));
    printf("%d\n", **p1);
    printf("%d\n", ***(&p1));
}
/*
45
45
45
45
45
45

Process returned 0 (0x0)   execution time : 0.051 s
Press any key to continue.*/
