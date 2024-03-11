#include <stdio.h>
main()
{
    int x, s = 0;
    char choice;
    do
    {
        printf("enter a no.");
        scanf("%d", &x);
        s = s + x;
        printf("would you like to continue [y/n]");
        fflush(stdin);
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("sum is %d", s);
}

/*enter a no.8
would you like to continue [y/n]y
enter a no.4
would you like to continue [y/n]n
sum is 12
Process returned 0 (0x0)   execution time : 6.558 s
Press any key to continue.
*/