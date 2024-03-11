#include <stdio.h>
void sum(void);
void main()
{
    sum();
}
void sum()
{
    int a = 5, b = 7, sum = 0;
    sum = a + b;
    printf("sum=%d", sum);
}
/*output
sum=12
Process returned 6 (0x6)   execution time : 0.055 s
Press any key to continue.
*/

/*#include <stdio.h>
void sum(void);
void main()
{
    sum(5, 4)
}
void sum()
{
    int a = 5, b = 7, sum = 0;
    sum = a + b;
    printf("sum=%d", sum);
}*/
// error

/*#include <stdio.h>
void sum()
{
    int a = 5, b = 7, sum = 0;
    sum = a + b;
    printf("sum=%d", sum);
}
void main()
{
    sum(5, 4);
}*/
// error