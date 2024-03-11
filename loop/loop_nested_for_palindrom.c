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
            s = s * 10 + d;
            num = num / 10;
        }
        if (s == i)
            printf("%d is palindrome\n", s);
    }
}

/*
11 is palindrome
22 is palindrome
33 is palindrome
44 is palindrome
55 is palindrome
66 is palindrome
77 is palindrome
88 is palindrome
99 is palindrome
Process returned 0 (0x0)   execution time : 0.203 s
Press any key to continue.
*/