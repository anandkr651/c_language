#include <stdio.h>
main()
{
    int y;
    printf("enter the double no");
    scanf("%d", &y);
    printf("%f", (float)y);
}
/*
enter the double no12.97657689
12.000000
Process returned 0 (0x0)   execution time : 5.433 s
Press any key to continue.*/

#include <stdio.h>
main()
{
    double y;
    printf("enter the double no");
    scanf("%lf", &y);
    printf("%d", (int)y);
}
/*enter the double no12.45
12
Process returned 0 (0x0)   execution time : 11.216 s
Press any key to continue.*/
