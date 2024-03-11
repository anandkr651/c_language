#include <stdio.h>
main()
{
    int b, h;
    float a;
    printf("enter the base and height ");
    scanf("%d%d", &b, &h);
    a = 1.0 / 2 * b * h;
    if (b != h)
        printf("area of triangle is %f", a);
}
/*output
enter the base and height 4
9
area of triangle is 18.000000
Process returned 0 (0x0)   execution time : 4.176 s
Press any key to continue.
*/