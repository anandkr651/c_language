#include <stdio.h>
char sum(void);
void main()
{
    char s;
    s = sum();
    printf("sum=%c", s);
}
char sum()
{
    int a = 5, b = 7, sum = 0;
    sum = a + b;
    return 'a', '0', 'i';
    return sum;
}
/*
sum=i
Process returned 5 (0x5)   execution time : 0.057 s
Press any key to continue.
*/