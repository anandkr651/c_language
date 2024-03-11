#include <stdio.h>
void add(int a, int b)
{
    printf("addition is %d\n", a + b);
}
void sub(int a, int b)
{
    printf("substraction is %d\n", a - b);
}
void mult(int a, int b)
{
    printf("multiplication is %d\n", a * b);
}
void div(int a, int b)
{
    printf("division is %d\n", a / b);
}
int main()
{
    int ch, a, b;
    printf("0 for add\n 1 for sub\n 2 for multiply\n 3 for division\n");
    printf("enter your choice");
    scanf("%d", &ch);
    printf("enter two no.");
    scanf("%d%d", &a, &b);
    switch (ch)
    {
    case 0:
        add(a, b);
        break;
    case 1:
        sub(a, b);
        break;
    case 2:
        mult(a, b);
        break;
    case 3:
        div(a, b);
        break;
    default:
        printf("enter invalid choice");
    }
}

/*output
0 for add
 1 for sub
 2 for multiply
 3 for division
enter your choice3
enter two no.4
2
division is 2

Process returned 0 (0x0)   execution time : 13.532 s
Press any key to continue
*/

#include <stdio.h>
void add(int a, int b)
{
    printf("addition is %d\n", a + b);
}
void sub(int a, int b)
{
    printf("substraction is %d\n", a - b);
}

void mult(int a, int b)
{
    printf("multiplication is %d\n", a * b);
}
void div(int a, int b)
{
    printf("division is %d\n", a / b);
}
int main()
{
    int ch, a, b;
    int (*fptr[10])(int, int) = {add, sub, mult, div};
    printf("0 for add\n 1 for sub\n 2 for multiply\n 3 for division\n");
    printf("enter your choice");
    scanf("%d", &ch);
    printf("enter two no.");
    scanf("%d%d", &a, &b);
    (*fptr[ch])(a, b);
    return 0;
}
/*0 for add
 1 for sub
 2 for multiply
 3 for division
enter your choice2
enter two no.2
7
multiplication is 14
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/