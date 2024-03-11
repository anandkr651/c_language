#include <stdio.h>
#include <string.h>
main()
{
    char s[38];
    printf("enter the string");
    gets(s);
    strrev(s);
    printf("string is %s", s);
}
/*
enter the stringanand bhagat
string is tagahb dnana
Process returned 0 (0x0)   execution time : 8.530 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    int l, i;
    char s1[30], c;
    printf("enter string");
    gets(s1);
    l = strlen(s1);
    for (i = 0; i < l / 2; i++)
    {
        c = s1[i];
        s1[i] = s1[l - 1 - i];
        s1[l - 1 - i] = c;
    }
    printf("%s", s1);
}
//  ################################### or ############################
#include <stdio.h>
#include <string.h>
main()
{
    int l, i, j;
    char s1[30], c;
    printf("enter string");
    gets(s1);
    l = strlen(s1);
    for (i = 0, j = l - 1; i < j; i++, j--)
    {
        c = s1[i];
        s1[i] = s1[j];
        s1[j] = c;
    }
    printf("%s", s1);
}
/*
enter stringanand kumar
ramuk dnana
Process returned 0 (0x0)   execution time : 9.340 s
Press any key to continue.*/