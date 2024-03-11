#include <stdio.h>
main()
{
    int i, num, s, d;
    for (i = 10; i <= 100; i++)
    {
        num = i;
        s = 0;
        while (num > 0)
        {
            d = num % 10;
            s = s + d;
            num = num / 10;
        }
        if (i % s == 0)
            printf("%d is niven\n", i);
    }
}

/*
10 is niven
12 is niven
18 is niven
20 is niven
21 is niven
24 is niven
27 is niven
30 is niven
36 is niven
40 is niven
42 is niven
45 is niven
48 is niven
50 is niven
54 is niven
60 is niven
63 is niven
70 is niven
72 is niven
80 is niven
81 is niven
84 is niven
90 is niven
100 is niven
*/