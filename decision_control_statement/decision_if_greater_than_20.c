#include <stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d", &x);
    if (x > 20)
        printf("%d is greater than 20", x);
}
/*enter a no.56
56 is greater than 20
PS C:\Users\DELL\OneDrive\Documents> */

#include <stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d", &x);
    if (x > 20)
        printf("hii\n");
    printf("hello\n");
    printf("bye");
}

/*enter a no.15
hello
bye
Process returned 0 (0x0)   execution time : 5.525 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d", &x);
    if (x > 20)
    {
        printf("hii\n");
        printf("hello\n");
        printf("bye");
    }
}
/*enter a no.15

Process returned 0 (0x0)   execution time : 3.267 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    int x;
    printf("enter a no.");
    scanf("%d", &x);
    if (x > 20)
        ;
    printf("hii\n");
    printf("hello\n");
    printf("bye");
}
/*output
enter a no.15
hii
hello
bye
Process returned 0 (0x0)   execution time : 3.860 s
Press any key to continue.
*/