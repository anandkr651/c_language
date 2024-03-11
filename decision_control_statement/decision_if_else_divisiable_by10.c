#include<stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d",&x);
    if(x%10==0)
        printf("divisible by 10 is %d",x);
        else
        printf("not divisible by 10");
        int p;
    printf("enter a no.\n");
    scanf("%d",&p);
    if(p%10==0)
        printf("divisible by 10 is %d",p);
        else
        printf("not divisible by 10");
}

/*output
enter a no.56
not divisible by 10
Process returned 0 (0x0)   execution time : 3.468 s
Press any key to continue.
*/
