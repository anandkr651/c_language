/*program to print the day of 1st jan of the year*/
#include <stdio.h>
main()
{
    int year, i, day = 0;
    printf("enter a year");
    scanf("%d", &year);
    for (i = 1; i < year; i++)
    {
        if (i % 4 == 0)
            day = day + 366;
        else
            day = day + 365;
    }
    day = day % 7;
    if (day == 1)
        printf("there is monday in 1/1/%d", year);
    if (day == 2)
        printf("tuesday 1/1/%d", year);
    if (day == 3)
        printf("wednesday 1/1/%d", year);
    if (day == 4)
        printf("thursday 1/1/%d", year);
    if (day == 5)
        printf("friday 1/1/%d", year);
    if (day == 6)
        printf("saturday 1/1/%d", year);
    if (day == 0)
        printf("sunday 1/1/%d", year);
}
/*
enter a year2023
sunday 1/1/2023
Process returned 0 (0x0)   execution time : 5.890 s
Press any key to continue.
*/
