#include <stdio.h>
#include <string.h>
main()
{
    char s[30];
    printf("enter the string");
    gets(s);
    strlwr(s);
    printf("string is %s", s);
}

/*output
enter the stringANand BHaGaT
string is anand bhagat
Process returned 0 (0x0)   execution time : 27.790 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    char s[30];
    printf("enter the string");
    gets(s);
    strupr(s);
    printf("string is %s", s);
}
/*output
enter the stringanand bhagat
string is ANAND BHAGAT
Process returned 0 (0x0)   execution time : 14.643 s
Press any key to continue.*/