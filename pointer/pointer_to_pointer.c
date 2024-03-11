#include<stdio.h>
main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("value of a = %d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n",*(*q));
    printf("a=%d\n",*(*(*r)));
    printf("address of q =%x  %x\n",r,&q);
    printf("address of p =%x  %x\n",&p,q);
}
/*
value of a = 10
a=10
a=10
a=10
address of q =61fe00  61fe00
address of p =61fe08  61fe08

Process returned 0 (0x0)   execution time : 0.059 s
Press any key to continue.*/
