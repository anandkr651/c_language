#include <stdio.h>
#pragma pack(1)
struct abc
{
    char c;
    int b;
    char a;
};
void main()
{
    struct abc s;
    printf("%d", sizeof(s));
}
/*
6
Process returned 1 (0x1)   execution time : 0.057 s
Press any key to continue.*/

#include <stdio.h>
#pragma pack(1)
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
/*
13
Process returned 2 (0x2)   execution time : 0.062 s
Press any key to continue.*/