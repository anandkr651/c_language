#include <stdio.h>
main()
{
    int x, d, s = 0;
    printf("enter a no.");
    scanf("%d", &x);
    do
    {
        d = x % 10;
        s = s * 10 + d;
        x = x / 10;
    } while (x > 0);
    printf("reverse of digit =%d", s);
}

/*enter a no.56867
reverse of digit =76865
Process returned 0 (0x0)   execution time : 2.161 s
Press any key to continue.
*/