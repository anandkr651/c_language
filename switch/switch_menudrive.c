#include <stdio.h>
main()
{
    int x, y, ch;
    char m;
    printf("\n press <1> for area of rectangle");
    printf("\n press <2> for circumference of circle");
    printf("\n press <3> for cube of no.");
    printf("\n press <4> for check even or odd");
    printf("\n press <5> for exit");
    printf("\n please enter your choice");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter the length and breadth");
        scanf("%d%d", &x, &y);
        printf("area of rectangle is %d\n", x * y);
        break;
    case 2:
        printf("enter the radius");
        scanf("%d", &x);
        printf("circumference of circle is %f", 2 * 3.14 * x);
        break;
    case 3:
        printf("enter the no.");
        scanf("%d", &x);
        printf("cube of a no. is %d\n", y * y * y);
        break;
    case 4:
        printf("enter the no.");
        scanf("%d", &x);
        if (x % 2 == 0)
            printf("%d is even", x);
        else
            printf("%d is odd", x);
        break;
    case 5:
        break;
    default:
        printf("invalid choice");
    }
}
/*press <1> for area of rectangle
 press <2> for circumference of circle
 press <3> for cube of no.
 press <4> for check even or odd
 press <5> for exit
 please enter your choice4
enter the no.89
89 is odd
Process returned 0 (0x0)   execution time : 8.259 s
Press any key to continue.*/


#include <stdio.h>
main()
{
    int x, y, z, i, ch, day = 0, m;
    char n;
    printf("\n press<1> for area of triangle");
    printf("\n press <2> for absolute value of a no.");
    printf("\n press <3> for greatest no. among three no.");
    printf("\n press <4> for check vowel or consonant");
    printf("\n press <5> for month name");
    printf("\n press <6> the day of 1st jan of the year");
    printf("\n press <7> for exit");
    printf("\n please enter your choice");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter the base and height");
        scanf("%d%d", &x, &y);
        printf("area is %f\n", 1.0 / 2 * x * y);
        break;
    case 2:
        printf("enter the no.");
        scanf("%d", &x);
        if (x > 0)
            printf("absolute value is %d", 1 * x);
        else
            printf("absolute value is %d", -1 * x);
        break;
    case 3:
        printf("enter three no.");
        scanf("%d%d%d", &x, &y, &z);
        if (x > y && x > z)
            printf("x is greater no.");
        else if (y > x && y > z)
            printf("y is greater no.");
        else if (z > x && z > y)
            printf("z is greater no.");
        break;
    case 4:
        printf("enter a character");
        fflush(stdin);
        scanf("%c", &n);
        switch (n)
        {
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            printf("consonant\n");
            break;
        default:
            printf("vowels");
        }
        break;
    case 5:
        printf("enter month no.");
        scanf("%d", &m);
        if (m == 1)
            printf("january");
        else if (m == 2)
            printf("february");
        else if (m == 3)
            printf("march");
        else if (m == 4)
            printf("april");
        else if (m == 5)
            printf("may");
        else if (m == 6)
            printf("june");
        else if (m == 7)
            printf("july");
        else if (m == 8)
            printf("august");
        else if (m == 9)
            printf("september");
        else if (m == 10)
            printf("october");
        else if (m == 11)
            printf("november");
        else if (m == 12)
            printf("december");
        else
            printf("invalid month no.");
        break;
    case 6:
        printf("enter a year");
        scanf("%d", &x);
        for (i = 1; i < x; i++)
        {
            if (i % 4 == 0)
                day = day + 366;
            else
                day = day + 365;
        }
        day = day % 7;
        if (day == 1)
            printf("there is monday in 1/1/%d", x);
        if (day == 2)
            printf("tuesday 1/1/%d", x);
        if (day == 3)
            printf("wednesday 1/1/%d", x);
        if (day == 4)
            printf("thursday 1/1/%d", x);
        if (day == 5)
            printf("friday 1/1/%d", x);
        if (day == 6)
            printf("saturday 1/1/%d", x);
        if (day == 0)
            printf("sunday 1/1/%d", x);
        break;
    case 7:
        break;
    default:
        printf("invalid choice no.");
    }
}
/*press<1> for area of triangle
 press <2> for absolute value of a no.
 press <3> for greatest no. among three no.
 press <4> for check vowel or consonant
 press <5> for month name
 press <6> the day of 1st jan of the year
 press <7> for exit
 please enter your choice5
enter month no.0
invalid month no.
Process returned 0 (0x0)   execution time : 10.007 s
Press any key to continue.*/

#include <stdio.h>
main()
{
    int x, y, z, ch;
    char m;
    printf("\n press<1> for area of triangle");
    printf("\n press <2> for absolute value of a no.");
    printf("\n press <3> for greatest no. among three no.");
    printf("\n press <4> for check vowel or consonant");
    printf("\n press <5> for smaller no between two no.");
    printf("\n press <6> for exit");
    printf("\n please enter your choice");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter the base and height");
        scanf("%d%d", &x, &y);
        printf("area is %f\n", 1.0 / 2 * x * y);
        break;
    case 2:
        printf("enter the no.");
        scanf("%d", &x);
        if (x > 0)
            printf("absolute value is %d", 1 * x);
        else
            printf("absolute value is %d", -1 * x);
        break;
    case 3:
        printf("enter three no.");
        scanf("%d%d%d", &x, &y, &z);
        ((x > y && x > z) ? printf("x is greatest %d", x) : ((y > z) ? printf("y is greatest %d", y) : printf("z is greatest %d", z)));
        break;
    case 4:
        printf("enter a character");
        fflush(stdin);
        scanf("%c", &m);
        switch (m)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'U':
        case 'O':
            printf("vowel\n");
            break;
        default:
            printf("consonant");
        }
        break;
    case 5:
        printf("enter two no.");
        scanf("%d%d", &x, &y);
        ((x > y) ? printf("y is smaller no.%d", y) : printf("x is smaller no.%d", x));
        break;
    default:
        printf("invalid choice");
    }
}
/*press<1> for area of triangle
 press <2> for absolute value of a no.
 press <3> for greatest no. among three no.
 press <4> for check vowel or consonant
 press <5> for smaller no between two no.
 press <6> for exit
 please enter your choice1
enter the base and height2
9
area is 9.000000

Process returned 0 (0x0)   execution time : 21.214 s
Press any key to continue.*/

#include<stdio.h>
main()
{
    int x,y,z,ch;
    char m;
    printf("\n press<1> for area of triangle");
    printf("\n press <2> for absolute value of a no.");
    printf("\n press <3> for greatest no. among three no.");
    printf("\n press <4> for check vowel or consonant");
    printf("\n press <5> for smaller no between two no.");
    printf("\n press <6> for exit");
    printf("\n please enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("enter the base and height");
        scanf("%d%d",&x,&y);
        printf("area is %f\n",1.0/2*x*y);
        break;
        case 2:printf("enter the no.");
        scanf("%d",&x);
        if(x>0)
            printf("absolute value is %d",1*x);
        else
        printf("absolute value is %d",-1*x);
        break;
        case 3:printf("enter three no.");
        scanf("%d%d%d",&x,&y,&z);
        ((x>y&&x>z)? printf("x is greatest %d",x):((y>z)?printf("y is greatest %d",y):printf("z is greatest %d",z)));
        break;
        case 4: printf("enter a character");
        scanf(" %c",&m);
            switch(m)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'U':
            case 'O':printf("vowel\n");break;
            default :printf("consonant");
        }
        break;
        case 5: printf("enter two no.");
        scanf("%d%d",&x,&y);
        ((x>y)?printf("y is smaller no.%d",y):printf("x is smaller no.%d",x));
        break;
        default :printf("invalid choice");
}
}
/*

 press<1> for area of triangle
 press <2> for absolute value of a no.
 press <3> for greatest no. among three no.
 press <4> for check vowel or consonant
 press <5> for smaller no between two no.
 press <6> for exit
 please enter your choice4
enter a characterj
consonant
Process returned 0 (0x0)   execution time : 11.456 s
Press any key to continue.*/

#include <stdio.h>
main()
{
    int x, y, ch;
    char m;
    printf("\n press <1> for area of rectangle");
    printf("\n press <2> for circumference of circle");
    printf("\n press <3> for cube of no.");
    printf("\n press <4> for check even or odd");
    printf("\n press <5> for exit");
    printf("\n please enter your choice");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter the length and breadth");
        scanf("%d%d", &x, &y);
        printf("area of rectangle is %d\n", x * y);
        break;
    case 2:
        printf("enter the radius");
        scanf("%d", &x);
        printf("circumference of circle is %f", 2 * 3.14 * x);
        break;
    case 3:
        printf("enter the no.");
        scanf("%d", &x);
        printf("cube of a no. is %d\n", y * y * y);
        break;
    case 4:
        printf("enter a no.");
        scanf("%d", &x);
        switch (x % 2)
        {
        case 0:
            printf("even");
            break;
        case 1:
            printf("odd");
            break;
        case 5:
            break;
        default:
            printf("invalid choice");
        }
    }
}
/*press <1> for area of rectangle
 press <2> for circumference of circle
 press <3> for cube of no.
 press <4> for check even or odd
 press <5> for exit
 please enter your choice2
enter the radius8
circumference of circle is 50.240000
Process returned 0 (0x0)   execution time : 9.090 s
Press any key to continue.*/