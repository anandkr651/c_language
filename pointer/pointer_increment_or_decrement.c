#include <stdio.h>
main()
{
    double x = 10.52, *p;
    p = &x;
    printf("%lf\t%u\n", x, p);
    x++;
    p++;
    printf("%lf\t%u\n", x, p);
}

/*
10.520000       6422032
11.520000       6422040

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
#include <stdio.h>
main()
{
    double x = 10.52, *p;
    p = &x;
    printf("%lf\t%u\n", x, p);
    x = x + 5;
    p = p + 5;
    printf("%lf\t%u\n", x, p);
}
/*
10.520000       6422032
15.520000       6422072

Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.*/