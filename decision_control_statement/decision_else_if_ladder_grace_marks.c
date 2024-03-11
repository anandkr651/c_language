#include <stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d", &x);
    if (x >= 85)
        printf("the grade is s");
    else if (x >= 75)
        printf("the grade is a");
    else if (x >= 65)
        printf("the grade is b");
    else if (x >= 55)
        printf("the grade is c");
    else if (x >= 50)
        printf("the grade is d");
    else
        printf("the grade is fail");
}
/*output
enter a no.65
the grade is b
Process returned 0 (0x0)   execution time : 5.980 s
Press any key to continue.
*/