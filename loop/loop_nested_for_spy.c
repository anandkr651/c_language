#include <stdio.h>
main()
{
    int i, num, d, s, p;
    for (i = 10; i <= 1000; i++)
    {
        num = i;
        s = 0;
        p = 1;
        while (num > 0)
        {
            d = num % 10;
            s = s + d;
            p = p * d;
            num = num / 10;
        }
        if (s == p)
            printf("%d is spy \n", i);
    }
}
/*
22 is spy
123 is spy
132 is spy
213 is spy
231 is spy
312 is spy
321 is spy

Process returned 0 (0x0)   execution time : 0.063 s
Press any key to continue.
*/
