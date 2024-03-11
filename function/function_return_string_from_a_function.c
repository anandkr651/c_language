#include <stdio.h>
char *display();
void main()
{
    char *str;
    str = display();
    // str[0]='z';
    printf("string is %s", str);
}
char *display()
{
    return "jenny";
}
/*output
string is jenny
Process returned 15 (0xF)   execution time : 0.064 s
Press any key to continue.
*/

#include <stdio.h>
char *display();
void main()
{
    char *str;
    str = display();
    printf("string is %s", str);
}
char *display()
{
    char str[] = "jenny";
    return str;
}
/*
string is jenny
Process returned 15 (0xF)   execution time : 0.057 s
Press any key to continue.
*/

#include <stdio.h>
char *display();
void main()
{
    char *str;
    str = display();
    str[0] = 'z';
    printf("string is %s", str);
}
char *display()
{
    static char str[] = "jenny";
    return str;
}
/*output
string is zenny
Process returned 15 (0xF)   execution time : 0.055 s
Press any key to continue.
*/

#include <stdio.h>
char *display();
void main()
{
    char *str;
    str = display();
    printf("string is %s", str);
}
char *display()
{
    char *str = "jenny";
    return str;
}
/*output
string is jenny
Process returned 15 (0xF)   execution time : 0.062 s
Press any key to continue.
*/

/*#include <stdio.h>
const char *display();
void main()
{
    const char *str;
    str = display();
    printf("string is %s", str);
}
const char *display()
{
    const char *str = "jenny";
    return str;
}*/
/*
string is jenny
Process returned 15 (0xF)   execution time : 0.057 s
Press any key to continue.
*/
