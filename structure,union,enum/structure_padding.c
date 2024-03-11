#include <stdio.h>
struct abc
{
    char c;
    int b;
    char a;
} s;
void main()
{
    printf("%d", sizeof(s));
}
/*12
Process returned 2 (0x2)   execution time : 0.055 s
Press any key to continue.*/

#include <stdio.h>
struct abc
{
    char c;
    char a;
    int b;
} s;
void main()
{
    printf("%d", sizeof(s));
}
/*8
Process returned 1 (0x1)   execution time : 0.052 s
Press any key to continue.*/

#include <stdio.h>
struct abc
{
    char c;
    int b;
    double a;
};
void main()
{
    struct abc s;
    printf("%d", sizeof(s));
}
/*16
Process returned 2 (0x2)   execution time : 0.058 s
Press any key to continue.*/