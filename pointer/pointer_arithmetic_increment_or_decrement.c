#include <stdio.h>
main()
{
    int a[] = {3, 2, 67, 0, 56};
    int *p;
    p = a;
    /*printf("%d\n",*p);
     printf("%d\n",*p++);  //index number increase
     printf("%d\n",*p);*/
    /*
    3
    3
    2

    Process returned 0 (0x0)   execution time : 0.047 s
    Press any key to continue.
    */

    /*printf("%d  %d\n",*p++,*p++);
      printf("%d\n",*p);*/
    /*
    2  3
    67

    Process returned 0 (0x0)   execution time : 0.047 s
    Press any key to continue.
    */

    /* printf("%d\n",*++p);
     printf("%d\n",*p);*/
    /*
    2
    2

    Process returned 0 (0x0)   execution time : 0.047 s
    Press any key to continue.
    */

    /*printf("%d  %d\n",*++p,*++p);
     printf("%d\n",*p);*/
    /*
    67  2
    67

    Process returned 0 (0x0)   execution time : 0.047 s
    Press any key to continue.
    */

    /*p=&a[4];
      printf("%d\n",*p);
      printf("%d  %d  %d\n",*--p,*--p,*--p);*/
    /*
    56
    2  67  0

    Process returned 0 (0x0)   execution time : 0.047 s
    Press any key to continue.
    */

    p = a;
    printf("%d %d %d\n", --(*p), (*p)++, ++(*p));
    /*
    4 4 4

    Process returned 0 (0x0)   execution time : 0.047 s
    Press any key to continue.
    */
}

#include <stdio.h>
main()
{
    int a[] = {13, 15, 11, 56, 67, 5, 4};
    int *p, *q;
    p = a;
    q = &a[0] + 3;
    /* printf("%d\n",*p);
      printf("%d\n",*q);
      printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
      printf("%d\n",*p);
      printf("%d\n",(*p)++);
      printf("%d\n",(*p)++);
      printf("%d\n\n",*p);

      q--;
      printf("%d\n",*q);
      printf("%d\n",(*q)--);
      printf("%d\n",*q);
      printf("%d\n",(*(q+2))--);
      printf("%d\n",*q--);
      printf("%d\n",*q);*/
    /*
    13
    56
    16 15 15
    17
    17
    18
    19

    11
    11
    10
    67
    10
    19

    Process returned 0 (0x0)   execution time : 0.047 s
    Press any key to continue.
    */

    printf("%d\n", *(p + 2) - 2);
    printf("%d\n", *p);
    /*
9
13

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/

    /*printf("%d\n",--(*(p+2)));
    printf("%d\n",*p);
    p=&a[3];
    printf("%d\n",*(p++ -2)-1);
    printf("%d\n",*p);*/

    /*
10
13
14
67

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
}

#include <stdio.h>
main()
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = a;
    printf("%d\n", *p);
    printf("%d %d %d\n", (*p)++, *p++, *++p);
    printf("%d\n", *p);

    q = p + 3;
    printf("%d\n", *q - 3);
    printf("%d\n", *--p + 5);
    printf("%d\n", *p + *q);
}

/*
10
-1 11 11
0
2
16
16

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/

#include <stdio.h>
main()
{
    char str[30] = "welcome to jenny";
    char *ptr = str;
    printf("%c\n", *ptr);
    printf("%c\n", *(ptr++ + 1));
    printf("%c\n", *ptr);
    printf("%c\n", *((ptr-- + 5) - 1) + 3);
    printf("%c\n", *ptr);
    printf("%c\n", *(++ptr + 10) - 32);
    printf("%c\n", *ptr);
    printf("%c %c %c\n", *ptr, *++ptr, *--ptr);
}

/*
w
e
e
p
w
J
e
e e w

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
