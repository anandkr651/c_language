#include <stdio.h>
#include <string.h>
main()
{
    char s1[30] = "jenny";
    char s2[] = "khatri";
    strcat(s1, s2);
    printf("string after concatenation is %s\n", s1);
    puts(s2);
}
/*
string after concatenation is jennykhatri
khatri

Process returned 0 (0x0)   execution time : 0.067 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    char s1[3] = "jenny";
    char s2[] = "khatri";
    strcat(s1, s2);
    printf("string after concatenation is %s\n", s1);
    puts(s2);
}
/*
string after concatenation is jen└‼∟khatri
khatri

Process returned -1073741819 (0xC0000005)   execution time : 0.449 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    int l1, l2, i;
    char s1[30] = "jenny";
    char s2[] = "khatri";
    l1 = strlen(s1);
    l2 = strlen(s2);
    for (i = 0; i < l2; i++)
    {
        s1[l1 + i] = s2[i];
    }
    printf("string after concatenation is %s\n", s1);
    puts(s2);
}
/*
string after concatenation is jennykhatri
khatri

Process returned 0 (0x0)   execution time : 0.090 s
Press any key to continue.*/