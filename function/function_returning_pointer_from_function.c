#include <stdio.h>
int *returnpointer(int[]);
void main()
{
    int a[] = {1, 2, 3, 4, 5}, *p;
    p = returnpointer(a);
    printf("%d", *p);
}
int *returnpointer(int a[])
{
    a = a + 2;
    return a;
}

/*
3
Process returned 2 (0x2)   execution time : 0.053 s
Press any key to continue.
*/