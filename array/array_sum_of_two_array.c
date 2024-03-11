//sum of matrix
#include <stdio.h>
main()
{
    int arr1[5], arr2[5], sumarr[5], i;
    printf("enter first array");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);
    printf("enter second array");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr2[i]);
    for (i = 0; i < 5; i++)
    {
        sumarr[i] = arr1[i] + arr2[i];
        printf("sum of array %d is =%d\n", i, sumarr[i]);
    }
}
/*output
enter first array1
2
3
4
5
enter second array1
2
3
4
5
sum of array 0 is =2
sum of array 1 is =4
sum of array 2 is =6
sum of array 3 is =8
sum of array 4 is =10

Process returned 0 (0x0)   execution time : 8.514 s
Press any key to continue.
*/
