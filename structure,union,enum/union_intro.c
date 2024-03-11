#include <stdio.h>
union abc
{
    int a;
    char b;
    float c;
};
void main()
{
    union abc u;
    union abc *ptr = &u;
    u.a = 1;
    u.b = 97;
    u.c = 96.87;
    printf("a value is %d\n", ptr->a);
    printf("b value is %c\n", ptr->b);
    printf("c value is %f", ptr->c);
}
/*
a value is 1119993201
b value is q
c value is 96.870003
Process returned 20 (0x14)   execution time : 0.047 s
Press any key to continue.*/

#include <stdio.h>
union abc
{
    int a;
    char b;
    float c;
};
void main()
{
    union abc u;
    union abc *ptr = &u;
    u.a = 167;
    u.b = 98;
    printf("a value is %d\n", ptr->a);
    printf("b value is %c\n", ptr->b);
}
/*
a value is 98
b value is b

Process returned 13 (0xD)   execution time : 0.047 s
Press any key to continue.*/