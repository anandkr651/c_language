#include<stdio.h>
main()
{
    const int a=11;
    const int *ptr =&a;
   // *ptr=12;
    printf("a=%d\n",a);
}
/*
a=11

Process returned 0 (0x0)   execution time : 0.060 s
Press any key to continue.*/
