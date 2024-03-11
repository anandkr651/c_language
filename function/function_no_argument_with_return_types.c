#include <stdio.h>
int sum(void);
void main()
{
    int s;
    s = sum();
    printf("sum=%d", s);
}
int sum()
{
    int a = 5, b = 7;
    return a + b;
}
/*output
sum=12
Process returned 6 (0x6)   execution time : 0.058 s
Press any key to continue.
*/

#include <stdio.h>
int sum(void);
void main()
{
    int s;
    s = sum();
    printf("sum=%d", s);
}
int sum()
{
    int a = 5, b = 7, sum = 0;
    sum = a + b;
    return sum;
}
/*output
sum=12
Process returned 6 (0x6)   execution time : 0.058 s
Press any key to continue.
*/

#include <stdio.h>
int sum(void);
void main()
{
    int s;
    s = sum();
    printf("sum=%d", s);
}
int sum()
{
    int a = 5, b = 7, sum = 0;
    sum = a + b;
    return sum;
    printf("hiiii");
}
/*output
sum=12
Process returned 6 (0x6)   execution time : 0.055 s
Press any key to continue.
*/

#include <stdio.h>
int sum(void);
void main()
{
    int s;
    s = sum();
    printf("sum=%d", s);
}
int sum()
{
    int a = 5, b = 7, sum = 0;
    sum = a + b;
    return sum, a, b;
}
/*output
sum=7
Process returned 5 (0x5)   execution time : 0.067 s
Press any key to continue.
*/