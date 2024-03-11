#include <stdio.h>
main()
{
    char name[][20] = {
        "akshay good",
        "parag very",
        "raman worse",
        "anand badty",
        "gopal handsome",
        "rajesh beautiful"};
    int i;
    char t;
    printf("origanal %s %s\n", &name[2][6], &name[3][6]);
    for (i = 6; i <= 10; i++)
    {
        t = name[2][i];
        name[2][i] = name[3][i];
        name[3][i] = t;
    }
    printf("new %s %s\n", &name[2][0], &name[3][0]);
}
/*
origanal worse badly
new raman badty anand worse

Process returned 0 (0x0)   execution time : 0.057 s
Press any key to continue.*/

#include <stdio.h>
main()
{
    char *name[] = {
        "akshay good",
        "parag very",
        "raman worse",
        "srinivas bad",
        "gopal handsome",
        "rajesh beautiful"};
    char *t;
    printf("origanal %s %s\n", name[2], name[3]);
    {
        t = name[2];
        name[2] = name[3];
        name[3] = t;
    }
    printf("new %s %s\n", name[2], name[3]);
}
/*
origanal raman worse srinivas bad
new srinivas bad raman worse

Process returned 0 (0x0)   execution time : 0.055 s
Press any key to continue.*/
