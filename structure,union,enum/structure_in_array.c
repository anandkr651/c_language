#include <stdio.h>
struct student
{
    int rollno;
    char name[5];
    float marks;
};
void main()
{
    int i;
    struct student s[3];
    for (i = 0; i < 3; i++)
    {
        scanf("%d%s%f", &s[i].rollno, &s[i].name, &s[i].marks);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d  %s  %f\n", s[i].rollno, s[i].name, s[i].marks);
    }
}
/*4
anand
90
5
raja
92
6
dezy
78
4  anand  90.000000
5  raja  92.000000
6  dezy  78.000000

Process returned 19 (0x13)   execution time : 79.773 s
Press any key to continue.*/

#include <stdio.h>
main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("enter a character,price and pages");
        fflush(stdin);
        scanf("%c%f%d", &b[i].name, &b[i].price, &b[i].pages);
    }
    for (i = 0; i < 3; i++)
    {
        printf("your name,price and pages");
        printf(" %c %f %d\n", b[i].name, b[i].price, b[i].pages);
    }
}
/*enter a character,price and pagesq
12
21
enter a character,price and pagesw
23
32
enter a character,price and pagese
34
43
your name,price and pages q 12.000000 21
your name,price and pages w 23.000000 32
your name,price and pages e 34.000000 43
PS C:\Users\DELL\OneDrive\Desktop\c_language\structure,union,enum>*/