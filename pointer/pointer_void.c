#include<stdio.h>
main()
{
    void *vp;
    int a=5;
    float b=1.56;
    char ch= 'c';
    vp=&a;
    printf("a=%d\n",*(int*)vp);
    vp=&b;
    printf("b=%f\n",*(float*)vp);
    vp=&ch;
    printf("ch=%c\n",*(char*)vp);
}
/*
a=5
b=1.560000
ch=c

Process returned 0 (0x0)   execution time : 0.052 s
Press any key to continue.*/
