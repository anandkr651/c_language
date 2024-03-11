#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, *ptr1;
    printf("enter total no of value");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("enter the value");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("enter the update size of n");
    scanf("%d", &n);
    ptr1 = (int *)realloc(ptr, n * sizeof(int));
    printf("previous address %d, new address %d", ptr, ptr1);
    printf("\nenter the value are");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    free(ptr);
}
/*enter total no of value5
enter the value1
2
3
4
5
enter the update size of n7
previous address 6624176, new address 6624176
enter the value are1    2       3       4       5       6619328 150994953
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/

#include <stdio.h>
#include <stdlib.h>
main()
{
    int *p, i;
    p = (int *)calloc(5, sizeof(int));
    printf("enter the 5 elements");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }
    printf("elements are\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d", *(p + i));
    }
    p = (int *)realloc(p, 10 * sizeof(int));
    for (i = 5; i < 10; i++)
    {
        *(p + i) = i * 20;
    }
    printf("after rellocation the element are\n");
    for (i = 0; i < 10; i++)
    {
        printf("%u\t %d\n", p + i, *(p + i));
    }
    free(p);
}
/*enter the 5 elements1
2
3
4
5
elements are
12345after rellocation the element are
10687408         1
10687412         2
10687416         3
10687420         4
10687424         5
10687428         100
10687432         120
10687436         140
10687440         160
10687444         180
PS C:\Users\DELL\OneDrive\Desktop\c_language> */