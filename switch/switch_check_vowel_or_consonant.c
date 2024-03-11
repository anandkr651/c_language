#include <stdio.h>
main()
{
    char x;
    printf("enter character");
    scanf("%c", &x);
    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("vowels\n");
        break;
    default:
        printf("consonant\n");
    }
}
/*enter characterl
consonant

Process returned 0 (0x0)   execution time : 3.207 s
Press any key to continue.*/
