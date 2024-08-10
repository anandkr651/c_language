#include<stdio.h>
enum xenum {c,cpp,java};
main()
{
    enum xenum var;
    printf("%d",sizeof(var));
    return 0;
}
/*4
PS D:\c_language\structure,union,enum>*/

#include<stdio.h>
typedef enum {male,female}gender;
int main()
{
    gender var=female;
    printf("%d",var);
    return 0;
}
/*1
PS D:\c_language\structure,union,enum> */