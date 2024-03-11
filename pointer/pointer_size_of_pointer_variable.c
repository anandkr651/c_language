#include<stdio.h>
main()
{
    char x,*p;
    int y,*p1;
    float z,*p2;
    double m,*p3;

    p=&x;
    p1=&y;
    p2=&z;
    p3=&m;
    printf("%d\t%d\t%d\t%d\n",sizeof(x),sizeof(y),sizeof(z),sizeof(m));
    printf("%d\t%d\t%d\t%d\n",sizeof(p),sizeof(p1),sizeof(p2),sizeof(p3));
}
/*
1       4       4       8
8       8       8       8

Process returned 0 (0x0)   execution time : 0.063 s
Press any key to continue.*/
