#include <stdio.h>
void fun();
int main()
{
    int a = 1;
    fun1();
    {
        int a = 10;
        printf("inside block1 %d\n", a);
    }
    {
        printf("inside block2 %d\n", a);
    }
    printf("inside main %d\n", a);
    return 0;
}
void fun1()
{
    int a = 23;
    printf("inside fun %d", a);
}
/*
inside fun 23inside block1 10
inside block2 1
inside main 1

Process returned 0 (0x0)   execution time : 0.053 s
Press any key to continue.*/

#include <stdio.h>
void fun();
int a = 50;
int main()
{
    fun1();
    {
        int a = 10;
        printf("inside block1 %d\n", a);
    }
    {
        printf("inside block2 %d\n", a);
    }
    a++;
    printf("inside main %d\n", a);
    return 0;
}
void fun1()
{
    int a = 23;
    printf("inside fun %d", a);
}
/*
inside fun 23inside block1 10
inside block2 50
inside main 51

Process returned 0 (0x0)   execution time : 0.056 s
Press any key to continue.*/
