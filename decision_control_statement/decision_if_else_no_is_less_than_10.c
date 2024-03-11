#include <stdio.h>
main()
{
    int x;
    printf("enter the no.");
    scanf("%d", &x);
    if (x < 10)
        printf("square of a no is %d", x * x);
    else
        printf("cube of a no is %d", x * x * x);
}
/*output
enter the no.56
cube of a no is 175616
Process returned 0 (0x0)   execution time : 2.812 s
Press any key to continue.
*/