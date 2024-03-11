#include <stdio.h>
#include <string.h>
main()
{
    char name[30];
    int count = 0;
    printf("enter name\n");
    gets(name);
    count = strlen(name);
    printf("length of the string %d", count);
}
/*
enter name
anand bhagat
length of the string 12
Process returned 0 (0x0)   execution time : 7.701 s
Press any key to continue.*/

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