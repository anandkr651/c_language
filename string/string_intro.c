#include <stdio.h>
#include <string.h>
main()
{
    char name[10];
    printf("enter name\n");
    scanf("%s", name);
    printf("%s", name);
}
/*enter name
anand kumar
anand
Process returned 0 (0x0)   execution time : 13.632 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    char name[30];
    printf("enter name\n");
    gets(name);
    printf("%s", name);
}
/*
enter name
anand kumar
anand kumar
Process returned 0 (0x0)   execution time : 7.212 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    char name[5];
    printf("enter name\n");
    gets(name);
    printf("%s", name);
}
/*
enter name
anand kumar
anand kumar
Process returned 0 (0x0)   execution time : 6.306 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    char name[5];
    printf("enter name\n");
    scanf("%4s", name);
    printf("%s", name);
}
/*
enter name
anand kumar
anan
Process returned 0 (0x0)   execution time : 9.941 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    char name[30];
    printf("enter name\n");
    scanf("%s", name);
    printf("%.5s", name);
}
/*
enter name
anand bhagat
anand
Process returned 0 (0x0)   execution time : 5.554 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    char name[30];
    printf("enter name");
    scanf("%s", name);
    printf("%10.5s", name);
}
/*
enter nameanandbhagat
     anand
Process returned 0 (0x0)   execution time : 7.784 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    char name[30];
    printf("enter name\n");
    scanf("%s", name);
    printf("%s", &name[2]);
}
/*enter name
anand bhagat
and
Process returned 0 (0x0)   execution time : 25.805 s
Press any key to continue.*/

#include <stdio.h>
#include <string.h>
main()
{
    char name[30];
    printf("enter name\n");
    scanf("%s", name);
    printf("%s", name[2]);
}
/*
enter name
anand bhagat

Process returned -1073741819 (0xC0000005)   execution time : 10.165 s
Press any key to continue.*/