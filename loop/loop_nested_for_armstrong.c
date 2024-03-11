#include <stdio.h>
main()
{
    int i, num, s, d;
    for (i = 1; i <= 1000; i++)
    {
        num = i;
        s = 0;
        while (num > 0)
        {
            d = num % 10;
            s = s + d * d * d;
            num = num / 10;
        }
        if (s == i)
            printf("%d is armstrong\n", s);
    }
}

/*
1 is armstrong
153 is armstrong
370 is armstrong
371 is armstrong
407 is armstrong

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
