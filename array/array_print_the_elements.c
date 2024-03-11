//print the elements of the array
#include <stdio.h>
main()
{
    int x[5], i;
    printf("enter five element");
    for (i = 0; i < 5; i++)
        scanf("%d", &x[i]);
    printf("element are :-\n");
    for (i = 0; i < 5; i++)
        printf("%d\n", x[i]);
}
/*output
enter five element1
2
3
4
5
element are :-
1
2
3
4
5

Process returned 0 (0x0)   execution time : 7.280 s
Press any key to continue.
*/