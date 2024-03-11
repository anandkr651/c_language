#include<stdio.h>
main()
{
    int a[]={2,1,3,9,-7};
    int *p=&a[1];
    int *q=&a[3];
    printf("q+p=%d\n",*q+*p);
    printf("p-q=%d\n",p-q);
    printf("value =%d\n",*q);
    q=q-2;
    printf("value =%d\n",*q);
    p=p+2;
    printf("q-p=%d\n",q-p);
    q=q-2;
    printf("value %d",*q);
}
/*
q+p=10
p-q=-2
value =9
value =1
q-p=-2
value 0
Process returned 0 (0x0)   execution time : 0.065 s
Press any key to continue.*/


#include<stdio.h>
main()
{
    int a[]={0,1,-1,10,11};
    int *p=a;
    int *q=&a[4];
    printf("value of %d\n",*p);
    printf("value of %d\n",*q);
    printf("p-q =%d\n",p-q);
    *q=25;
    printf("value of %d\n",*q);
    printf("q-p =%d\n",q-p);
    *p=27;
    q=q-3;
    p=p+3;
    printf("value of %d\n",*p);
    printf("value of %d\n",*q);
    printf("p-q =%d\n",p-q);

}
/*
value of 0
value of 11
p-q =-4
value of 25
q-p =4
value of 10
value of 1
p-q =2

Process returned 0 (0x0)   execution time : 0.061 s
Press any key to continue.*/
