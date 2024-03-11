#include <stdio.h>
main()
{
    int i, num, d, s, fd;
    for (i = 1; i <= 1000; i++)
    {
        fd = i % 10;
        num = i / 10;
        s = 0;
        while (num > 0)
        {
            d = num % 10;
            s = s + d;
            num = num / 10;
        }
        if (fd == s)
            printf("dracula no is %d\n", i);
    }
}

/*
dracula no is 11
dracula no is 22
dracula no is 33
dracula no is 44
dracula no is 55
dracula no is 66
dracula no is 77
dracula no is 88
dracula no is 99
dracula no is 101
dracula no is 112
dracula no is 123
dracula no is 134
dracula no is 145
dracula no is 156
dracula no is 167
dracula no is 178
dracula no is 189
dracula no is 202
dracula no is 213
dracula no is 224
dracula no is 235
dracula no is 246
dracula no is 257
dracula no is 268
dracula no is 279
dracula no is 303
dracula no is 314
dracula no is 325
dracula no is 336
dracula no is 347
dracula no is 358
dracula no is 369
dracula no is 404
dracula no is 415
dracula no is 426
dracula no is 437
dracula no is 448
dracula no is 459
dracula no is 505
dracula no is 516
dracula no is 527
dracula no is 538
dracula no is 549
dracula no is 606
dracula no is 617
dracula no is 628
dracula no is 639
dracula no is 707
dracula no is 718
dracula no is 729
dracula no is 808
dracula no is 819
dracula no is 909

Process returned 0 (0x0)   execution time : 0.109 s
Press any key to continue.
*/
