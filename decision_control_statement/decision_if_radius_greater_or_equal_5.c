#include <stdio.h>
main()
{
    int x;
    float y, c;
    y = 3.14;
    printf("enter the radius");
    scanf("%d", &x);
    c = 2 * y * x;
    if (x >= 5)
        printf("circumference of circle is %f", c);
}
/*output
enter the radius7
circumference of circle is 43.960003
Process returned 0 (0x0)   execution time : 1.977 s
Press any key to continue.
*/