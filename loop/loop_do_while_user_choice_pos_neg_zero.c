#include <stdio.h>
main()
{
    int pos, neg, zero, n;
    char ans;
    pos = 0, neg = 0, zero = 0;
    do
    {
        printf("\n enter a no.");
        scanf("%d", &n);
        if (n == 0)
            zero++;
        if (n > 0)
            pos++;
        if (n < 0)
            neg++;
        fflush(stdin);
        printf("\n do you want to continue");
        scanf("%c", &ans);
    } while (ans == 'y' || ans == 'Y');
    printf("you enter the positive value %d\n", pos);
    printf("you enter the negative value %d\n", neg);
    printf("you enter the zero value %d\n", zero);
}
/*
enter a no.7

 do you want to continuey

 enter a no.-9

 do you want to continue4
you enter the positive value 1
you enter the negative value 1
you enter the zero value 0

Process returned 0 (0x0)   execution time : 16.485 s
Press any key to continue.
*/
