/*#include<stdio.h>
enum xenum {c,cpp,java};
main()
{
    enum xenum var;
    printf("%d",sizeof(var));
    return 0;
}
*/
#include<stdio.h>
typedef enum {male,female}gender;
int main()
{
    gender var=female;
    printf("%d",var);
    return 0;
}
