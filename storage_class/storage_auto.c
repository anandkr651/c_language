#include <stdio.h>
int main()
{
    auto int x = 10;
    {
        auto int x = 20;
        printf("x=%d", x);
    }
    printf("\nx=%d", x);
    return 0;
}
/*
x=20
x=10
Process returned 0 (0x0)   execution time : 0.064 s
Press any key to continue.*/

#include <stdio.h>
int main()
{
    auto int x = 10;
    {
        auto int x;
        printf("x=%d", x);
    }
    printf("\nx=%d", x);
    return 0;
}
/*
x=0
x=10
Process returned 0 (0x0)   execution time : 0.046 s
Press any key to continue.*/

#include <stdio.h>
auto int x = 20;
int main()
{
    auto int x = 10;
    {
        auto int x = 20;
        printf("x=%d", x);
    }
    printf("\nx=%d", x);
    return 0;
}
/*error*/ // auto doesnot decelared in the global variable