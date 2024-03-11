#include<stdio.h>
void modify(char[],char[]);
void main()
{
    char str1[]="jenny";
    char str2[]="khatri";
    modify(str1,str2);
}
void modify(char str1[],char str2[])
{
    int l=0,i;
    for(i=0;str1[i]!='\0';i++)
    {
        l=l+1;
    }
    str2[1]='z';
    printf("length of string1 is %d\n",l);
    printf("both the string are %s %s",str1,str2);
}
/*output
length of string1 is 5
both the string are jenny kzatri
Process returned 32 (0x20)   execution time : 0.066 s
Press any key to continue.
*/

#include <stdio.h>
void modify(char *, char *);
void main()
{
    char str1[] = "jenny";
    char str2[] = "khatri";
    modify(str1, str2);
    printf("both the string are %s %s\n", str1, str2);
}
void modify(char *str1, char *str2)
{
    int i, l = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        l = l + 1;
    }
    str2[1] = 'z';
    printf("length of string1 is %d\n", l);
    printf("both the string are %s %s\n", str1, str2);
}
/*output
length of string1 is 5
both the string are jenny kzatri
both the string are jenny kzatri
Process returned 32 (0x20)   execution time : 0.063 s
Press any key to continue.
*/