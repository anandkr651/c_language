#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x, *y, *r, *div, *divd;
    x = (int *)malloc(sizeof(int));
    y = (int *)malloc(sizeof(int));
    r = (int *)malloc(sizeof(int));
    divd = (int *)malloc(sizeof(int));
    div = (int *)malloc(sizeof(int));
    printf("enter the two number");
    scanf("%d%d", x, y);
    if (*x > *y)
    {
        *divd = *x;
        *div = *y;
    }
    else
    {
        *divd = *y;
        *div = *x;
    }
    *r = *divd % *div;
    while (*r != 0)
    {
        *divd = *div;
        *div = *r;
        *r = *divd % *div;
    }
    printf("HCF of two number %d and %d is %d", *x, *y, *div);
return 0;
}
/*enter the two number62
10
HCF of two number 62 and 10 is 2
PS C:\Users\DELL\OneDrive\Desktop\c_language\dynamic_memoy_allocation>*/