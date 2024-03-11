#include <stdio.h>
#define A 10
int main()
{
    int x = 7;
    printf("%d", A);
    return 0;
}
/*10
Process returned 0 (0x0)   execution time : 0.053 s
Press any key to continue.*/

#include <stdio.h>
#define MUL(a, b) a *b
int main()
{
    printf("multiple %d", MUL(2, 5));
    return 0;
}
/*
multiple 10
Process returned 0 (0x0)   execution time : 0.053 s
Press any key to continue.*/

#include <stdio.h>
#define MUL(a, b) a *b
int main()
{
    printf("multiple %d", MUL(5 - 2, 7 + 4)); // 5-2*7+4 ==>5-14+4 ==>-5
    return 0;
}
/*
multiple -5
Process returned 0 (0x0)   execution time : 0.057 s
Press any key to continue.*/

#include <stdio.h>
#define MAX(a, b)               \
    if (a > b)                  \
        printf("a is maximun"); \
    else                        \
        printf("b is maximun");
int main()
{
    MAX(3, 4);
    return 0;
}
/*b is maximun
PS C:\Users\DELL\OneDrive\Desktop\c_language> */