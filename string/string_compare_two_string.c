#include <stdio.h>
#include <string.h>
main()
{
    int value;
    char s1[30], s2[30];
    printf("enter string 1");
    gets(s1);
    printf("enter string 2");
    gets(s2);
    value = strcmp(s1, s2);
    if (value == 0)
        printf("same");
    else
        printf("not same");
}
/*
enter string 1anand
enter string 2bhagat
not same
Process returned 0 (0x0)   execution time : 15.357 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    int i, flag;
    char s1[30], s2[30];
    printf("enter string 1");
    gets(s1);
    printf("enter string 2");
    gets(s2);
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            flag = 1;
        break;
    }
    if (flag == 0)
        printf("same");
    else
        printf("not same");
}
/*
enter string 1anand
enter string 2bhagat
not same
Process returned 0 (0x0)   execution time : 12.405 s
Press any key to continue.*/
