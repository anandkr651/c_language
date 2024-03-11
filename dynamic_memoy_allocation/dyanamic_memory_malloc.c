#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr;
    printf("enter total no of value");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("enter the value");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("entered value is");
    for (i = 0; i < n; i++)
    {
        printf("%d", *(ptr + i));
    }
    free(ptr);
}
/*enter total no of value3
enter the value1
2
3
entered value is123
PS C:\Users\DELL\OneDrive\Desktop\c_language> */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr;
    printf("enter total no of value");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("entered value is");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    free(ptr);
}
/*enter total no of value3
entered value is8064488
8061120
184549387
PS C:\Users\DELL\OneDrive\Desktop\c_language> */

#include <stdio.h>
#include <stdlib.h>
main()
{
    int *x, *y, *s;
    x = (int *)malloc(sizeof(int));
    y = (int *)malloc(sizeof(int));
    s = (int *)malloc(sizeof(int));
    *x = 100;
    *y = 25;
    *s = *x + *y;
    printf("sum is %d", *s);
}
/*sum is 125
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/

#include <stdio.h>
#include <stdlib.h>
main()
{
    int *x;
    float *y, *z, *p;
    x = (int *)malloc(sizeof(int));
    y = (float *)malloc(sizeof(float));
    z = (float *)malloc(sizeof(float));
    p = (float *)malloc(sizeof(float));
    printf("enter the number");
    scanf("%d%f%f", x, y, z);
    *p = (*x) * (*y) * (*z);
    printf("product is %f", *p);
    free(x);
    free(y);
    free(z);
    free(p);
}
/*enter the number4
3
2
product is 24.000000
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/

#include <stdio.h>
#include <stdlib.h>
main()
{
    int *x, i;
    x = (int *)malloc(5 * sizeof(int));
    printf("enter your five number");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", x + i);
    }
    printf("number is");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(x + i));
    }
    free(x);
}
/*enter your five number1
2
3
4
5
number is1
2
3
4
5
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/

#include <stdio.h>
#include <stdlib.h>
main()
{
    int *x, *i;
    x = (int *)malloc(5 * sizeof(int));
    i = (int *)malloc(sizeof(int));
    printf("enter your 5 element");
    for ((*i) = 0; (*i) < 5; (*i)++)
    {
        scanf("%d", x + (*i));
    }
    printf("number is");
    for ((*i) = 0; (*i) < 5; (*i)++)
    {
        printf("%d", *(x + (*i)));
    }
    free(x);
    free(i);
}
/*enter your 5 element1
2
3
4
5
number is12345
PS C:\Users\DELL\OneDrive\Desktop\c_language> */

#include <stdio.h>
#include <stdlib.h>
main()
{
    int *s, *x, i;
    s = (int *)malloc(sizeof(int));
    x = (int *)malloc(sizeof(int));
    printf("enter the 5 number");
    for (i = 0; i < 5; i++)
        scanf("%d", x + i);
    *s = *x;
    printf("%d the", *s);
    for (i = 0; i < 5; i++)
    {
        if (*s > *(x + i))
            *s = *(x + i);
    }
    printf("%d is the smallest number", *s);
    free(s);
    free(x);
}
/*enter the 5 number5
4
3
2
1
5 the1 is the smallest number
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/