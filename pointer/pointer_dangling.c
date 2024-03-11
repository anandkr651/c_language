#include <stdio.h>
#include <stdlib.h>
main()
{
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);
    // printf("%d\n",*ptr);
    ptr = NULL;
    printf("%d\n", ptr);
}
/*
10
0

Process returned 0 (0x0)   execution time : 0.057 s
Press any key to continue.*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr = NULL;
    {
        int a = 5;
        ptr = &a;
        printf("a=%d\n", *ptr);
    }
    printf("%d\n", *ptr);
}
/*
a=5
5

Process returned 2 (0x2)   execution time : 0.054 s
Press any key to continue.*/
