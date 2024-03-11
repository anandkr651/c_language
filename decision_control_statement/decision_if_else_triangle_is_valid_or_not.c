#include <stdio.h>
main()
{
    int x, y, z, s;
    printf("enter angle of triangle\n");
    scanf("%d%d%d", &x, &y, &z);
    s = x + y + z;
    if (s == 180)
        printf("triangle is valid");
    else
        printf("triangle is not valid");
}

/*output
enter side of triangle
67
98
34
triangle is not valid
Process returned 0 (0x0)   execution time : 11.969 s
Press any key to continue.
*/