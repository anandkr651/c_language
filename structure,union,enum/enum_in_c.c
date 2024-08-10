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

#include <stdio.h>  
 enum weekdays{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};  
 int main()  
{  
 enum weekdays w; 
 w=Monday;
 printf("The value of w is %d",w);  
    return 0;  
}
/*The value of w is 2
PS D:\c_language\structure,union,enum>*/