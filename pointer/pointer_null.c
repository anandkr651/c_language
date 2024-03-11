#include<stdio.h>
main()
{
    int a=3;
   // int *ptr1=&a;
  //  printf("%d\n",*ptr1);
    int *ptr1=NULL;
    int *ptr2;
    printf("%d\n",ptr1);
    printf("%d\n",ptr2);
    printf("%d\n",*ptr1);
}
/*
0
50

Process returned -1073741819 (0xC0000005)   execution time : 0.427 s
Press any key to continue.*/
