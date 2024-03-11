#include <stdio.h>
main()
{
    int r;
    float y;
    y = 3.14;
    printf("enter the radius");
    scanf("%d", &r);
    if (r != 10)
        printf("circumference of circle is %f", 2 * y * r);
    else
        printf("area of circle is %f", y * r * r);
}
/*output
enter the radius8
circumference of circle is 50.240002
Process returned 0 (0x0)   execution time : 4.438 s
Press any key to continue.
*/