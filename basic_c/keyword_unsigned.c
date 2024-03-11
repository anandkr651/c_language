// #include<stdio.h>
// main()
// {
//     unsigned int a=365;
//     printf("%d",a);
// }
/*365
PS C:\Users\DELL\OneDrive\Desktop\c_language> */

// #include<stdio.h>
// main()
// {
//     unsigned int a=-365;
//     printf("%d",a);
// }
/*-365
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/

#include<stdio.h>
main()
{
    char ch= 123456;
    printf("%c",ch);
}
/*@
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/
/* we know that char have 1 byte and int have 4 byte. 123456 change into binary number 
    00000000 00000001 11100010 01000000    ===>>> first 1 ==65536 ,second 1==32768 ,third 1==16384 
                                                   forth 1 ==512 , fith 1 ==64
the ascii value of @ is 64 so first byte have comes into ch have 64 so they print the ascii code.*/