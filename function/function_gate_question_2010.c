#include<stdio.h>
int i=0,j=1;
void f(int*p,int*q)
{
    p=q;
    printf("p=%d\n",p);
    printf("q=%d\n",q);
    *p=2;
    printf("p=%d\n",p);
    printf("i=%d j=%d\n",i,j);
}
int main()
{
    f(&i,&j);
    printf("i=%d j=%d\n",i,j);
    return 0;
}

/*
p=-1617002480
q=-1617002480
p=-1617002480
i=0 j=2
i=0 j=2
PS C:\Users\DELL\OneDrive\Desktop\c_language\function>
*/