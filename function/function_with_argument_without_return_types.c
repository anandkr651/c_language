#include <stdio.h>
void sum(float, float);
void main()
{
    float x, y;
    printf("enter x and y");
    scanf("%f%f", &x, &y);
    sum(x, y);
}
void sum(float a, float b)
{
    float s = 0;
    s = a + b;
    printf("sum=%f", s);
}
/*
enter x and y7
3
sum=10.000000
Process returned 13 (0xD)   execution time : 4.255 s
Press any key to continue.
*/

#include <stdio.h>
void sum(float, float);
void main()
{
    float x, y;
    printf("enter x and y");
    scanf("%f%f", &x, &y);
    sum(3.1, 4.1);
}
void sum(float a, float b)
{
    float s = 0;
    s = a + b;
    printf("sum=%f", s);
}

/*
enter x and y5
9
sum=7.200000
Process returned 12 (0xC)   execution time : 4.006 s
Press any key to continue.
*/

/*#include <stdio.h>
void sum(int, float);
void main()
{
    float x, y;
    printf("enter x and y");
    scanf("%f%f", &x, &y);
    sum(x, y);
}
void sum(int a, float b)
{
    float s = 0;
    s = a + b;
    printf("sum=%f", s);
}*/
/*
enter x and y3
7
sum=10.000000
Process returned 13 (0xD)   execution time : 5.265 s
Press any key to continue.
*/