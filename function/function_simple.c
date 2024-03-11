/*#include <stdio.h>
sum()
{
    int a, b, sum = 0;
    printf("enter two no.");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("sum =%d\n", sum);
}
main()
{
    sum();
    printf("hello\n");
    sum();
}*/
/*output
enter two no.4
5
sum =9
hello
enter two no.2
8
sum =10
Process returned 0 (0x0)   execution time : 9.945 s
Press any key to continue.
*/

/*#include <stdio.h>
sum(int, int);
main()
{
    sum(5, 7);
    sum(0, 9);
}
sum(int a, int b)
{
    int s = 0;
    s = a + b;
    printf("sum =%d\n", s);
}*/
/*output
sum =12
sum =9

Process returned 0 (0x0)   execution time : 0.056 s
Press any key to continue.
*/

/*#include <stdio.h>
float sum();
void main()
{
    sum();
    sum();
}
float sum()
{
    float a, b, s = 0;
    printf("enter two no.");
    scanf("%f%f", &a, &b);
    s = a + b;
    printf("sum =%f\n", s);
}*/
/*
enter two no.4
8
sum =12.000000
enter two no.8
8.9
sum =16.900000

Process returned 15 (0xF)   execution time : 18.044 s
Press any key to continue.
*/

#include <stdio.h>
char fun();
void main()
{
    fun();
}
char fun()
{
    char c, ch;
    printf("enter a character");
    scanf("%c", &c);
    ch = c;
    printf("ch=%c", ch);
}
/*
enter a characterv
ch=v
Process returned 4 (0x4)   execution time : 8.889 s
Press any key to continue.
*/

#include <stdio.h>
char fun();
void main()
{
    char ch;
    ch = fun();
    printf("ch =%c", ch);
}
char fun()
{
    char c;
    printf("enter character");
    scanf("%c", &c);
    return 'c';
}

/*
enter characters
ch =c
Process returned 5 (0x5)   execution time : 2.878 s
Press any key to continue.
*/

#include <stdio.h>
char fun();
void main()
{
    char ch;
    ch = fun();
    printf("ch =%c", ch);
}
char fun()
{
    char c;
    printf("enter character");
    scanf("%c", &c);
    return c;
}
/*
enter characterh
ch =h
Process returned 5 (0x5)   execution time : 3.113 s
Press any key to continue.
*/

#include <stdio.h>
float sum();
int main()
{
    sum();
    printf("hello\n");
    sum();
}
float sum()
{
    float a, b, s = 0;
    printf("enter a no.");
    scanf("%f%f", &a, &b);
    s = a + b;
    printf("sum=%f\n", s);
}
/*
enter a no.7
9
sum=16.000000
hello
enter a no.5
8
sum=13.000000

Process returned 0 (0x0)   execution time : 10.857 s
Press any key to continue.
*/