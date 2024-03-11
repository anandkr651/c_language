#include <stdio.h>
main()
{
    int i, num, d, s;
    for (i = 125; i <= 135; i++)
    {
        num = i;
        s = 0;
        while (num > 0)
        {
            d = num % 10;
            s = s * 10 + d;
            num = num / 10;
        }
        printf("%d reverse no. is %d\n", i, s);
    }
}

/*
125 reverse no. is 521
126 reverse no. is 621
127 reverse no. is 721
128 reverse no. is 821
129 reverse no. is 921
130 reverse no. is 31
131 reverse no. is 131
132 reverse no. is 231
133 reverse no. is 331
134 reverse no. is 431
135 reverse no. is 531

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/