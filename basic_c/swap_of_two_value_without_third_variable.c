#include <stdio.h>
main()
{
    int x, y;
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    printf("x is %d \ny is %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\n after interchange \n");
    printf("x is %d\ny is %d", x, y);
}
/*enter two no.6
9
x is 6
y is 9

 after interchange
x is 9
y is 6
Process returned 0 (0x0)   execution time : 2.632 s
Press any key to continue.*/

#include <stdio.h>
main()
{
    int x, y;
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    printf("x is %d \ny is %d\n", x, y);
    x = x * y;
    y = x / y;
    x = x / y;
    printf("\n after interchange \n");
    printf("x is %d\ny is %d", x, y);
}
/*enter two no.4
7
x is 4
y is 7

 after interchange
x is 7
y is 4
Process returned 0 (0x0)   execution time : 2.992 s
Press any key to continue.*/

#include <stdio.h>
main()
{
    int x, y;
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    printf("x is %d \ny is %d\n", x, y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("\n after interchange \n");
    printf("x is %d\ny is %d", x, y);
}
/*enter two no.5
8
x is 5
y is 8

 after interchange
x is 8
y is 5
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/