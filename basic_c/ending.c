#include<stdio.h>
int main()
{
    printf("date %s",__DATE__);
    printf("\ntime %s",__TIME__);
    printf("\nFILE %s",__FILE__);
    printf("\nLINE %d",__LINE__);
    printf("\nANSI %d",__STDC__);
    return 0;
}
/*date Jan 23 2024
time 16:19:32   
FILE ending.c
LINE 7       
ANSI 1       
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/