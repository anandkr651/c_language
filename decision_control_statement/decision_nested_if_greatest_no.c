#include<stdio.h>
main()
{
    int x,y,z;
    printf("enter three no.");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
            printf("x is greatest no.");
        else
            printf("z is greatest no.");
    }
    else
    {
        if(y>z)
            printf("y is greatest no.");
        else
            printf("z is greatest no.");
    }
}
/*output
enter three no.34
56
22
y is greatest no.
Process returned 0 (0x0)   execution time : 5.872 s
Press any key to continue.
*/
