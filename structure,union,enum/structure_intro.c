/*#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
};
void main()
{
    struct student s1={1,"jenny",90.91};
    struct student s2={2,"akash",65.91};
    printf("info of s1");
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);
    printf("\n info of s2");
    printf("\n %d  %s  %f",s2.rollno,s2.name,s2.marks);
}*/
/*info of s1
 1  jenny  90.910004
 info of s2
 2  akash  65.910004
Process returned 21 (0x15)   execution time : 0.057 s
Press any key to continue.*/

/*#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
} s1={1,"jenny",90.91};
void main()
{
   printf("info of s1");
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);

}*/
/*info of s1
 1  jenny  90.910004
Process returned 21 (0x15)   execution time : 0.058 s
Press any key to continue.*/
/*

#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
};
void main()
{
    struct student s1;
    struct student s2={2,"akash",65.91};
    s1=s2;
    printf("info of s1");
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);
    printf("\n info of s2");
    printf("\n %d  %s  %f",s2.rollno,s2.name,s2.marks);
}*/
/*
info of s1
 2  akash  65.910004
 info of s2
 2  akash  65.910004
Process returned 21 (0x15)   execution time : 0.058 s
Press any key to continue.*/

/*#include<stdio.h>
struct student{
int rollno;
char name[10];
float marks;
};
void main()
{
    struct student s1;
    struct student s2={2,"akash",65.91};
    s1.rollno=1;
    s1.name[10]="jenny";
    s1.marks=90.91;
    printf("info of s1");
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);
    printf("\n info of s2");
    printf("\n %d  %s  %f",s2.rollno,s2.name,s2.marks);
}*/
/*info of s1
 1    90.910004
 info of s2
 2  akash  65.910004
Process returned 21 (0x15)   execution time : 0.057 s
Press any key to continue.*/

/*#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
};
void main()
{
    struct student s1;
    struct student s2={2,"akash",65.91};
    printf("info of s1");
    scanf("%d",&s1.rollno);
    scanf("%s",&s1.name);
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);
    printf("\n info of s2");
    printf("\n %d  %s  %f",s2.rollno,s2.name,s2.marks);
}*/
/*
info of s14
anand

 4  anand  0.000000
 info of s2
 2  akash  65.910004
Process returned 21 (0x15)   execution time : 86.058 s
Press any key to continue.*/

/*#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
};
void main()
{
    struct student s1={1,"jenny",90.91};
    struct student s2={2,"akash",65.91};
    if(s1.rollno<s2.rollno)
        printf("hye");
}*/

/*hye
Process returned 3 (0x3)   execution time : 0.052 s
Press any key to continue.*/

/*#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
}s3={3};
struct student s1={1,"jenny",90.91};
struct student s2;
void main()
{
    s2=s1;
    printf("info of s1");
    printf("\n %d  %s  %f",s1.rollno,s1.name,s1.marks);
    printf("\n info of s2");
    printf("\n %d  %s  %f",s2.rollno,s2.name,s2.marks);
    printf("\n info of s3");
    printf("\n %d  %s  %f",s3.rollno,s3.name,s3.marks);
}*/
/*info of s1
 1  jenny  90.910004
 info of s2
 1  jenny  90.910004
 info of s3
 3    0.000000
Process returned 15 (0xF)   execution time : 0.058 s
Press any key to continue.*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    struct gospel
    {
        int num;
        char mess1[50];
        char mess2[50];
    }m;
m.num = 1;
strcpy(m.mess1, "if all that you have is hammer");
strcpy(m.mess2,"everything looks like a nail");

printf("%u %u %u\n",&m.num, m.mess1, m.mess2);
return 0 ;
}*/
/*2852125952 2852125956 2852126006
PS C:\Users\DELL\OneDrive\Desktop\c_language\structure,union,enum> */

/*#include<stdio.h>
#include<string.h>
int main()
{
    struct part{
        char partname[50];
        int partnumber;
    };
    struct part p,*ptrp;
    ptrp = &p;
    strcpy(p.partname , "crankshaft");
    p.partnumber = 102133;

    printf("%s %d\n",p.partname,p.partnumber);
    printf("%s %d\n",(*ptrp).partname,(*ptrp).partnumber);
    printf("%s %d\n",ptrp->partname,ptrp->partnumber);
    return 0;
}*/
/*crankshaft 102133
crankshaft 102133
crankshaft 102133
PS C:\Users\DELL\OneDrive\Desktop\c_language\structure,union,enum> */

/*#include<stdio.h>
struct gospel{
    int num ;
    char mess1[50];
    char mess2[50];
} m1 = {2,"if you are driven by success","make sure that it is a quality drive"};
int main()
{
    struct gospel m2, m3;
    m2=m1;
    m3=m2;
    printf("%d %s %s\n",m1.num, m2.mess1, m3.mess2);
    return 0;
}*/
/*2 if you are driven by success make sure that it is a quality drive
PS C:\Users\DELL\OneDrive\Desktop\c_language\structure,union,enum> */

/*#include<stdio.h>
struct virus
{
   char signature[25];
   char status[20];
   int  size;
}v[2]={"yankee doodle","deadly",1813,"dark avenger","killer",1795};
int main()
{
    int i;
    for(i=0;i<=1;i++)
    printf("%s %s\n",v->signature,v->status);
    return 0;
}*/
/*yankee doodle deadly
yankee doodle deadly
PS C:\Users\DELL\OneDrive\Desktop\c_language\structure,union,enum>*/

#include<stdio.h>
struct student
{
    char name[20];
    int age;
    char adr[40];
};
main()
{
    struct student s1,s2;
    printf("enter name of s1\n");
    gets(s1.name);
    printf("enter the age of s1\n");
    scanf("%d",&s1.age);
    printf("enter the address of s1\n");
    fflush (stdin);
    gets(s1.adr);
    printf("enter name of s2\n");
    gets(s2.name);
    printf("enter the age of s2\n");
    scanf("%d",&s2.age);
    printf("enter the address of s2\n");
    fflush (stdin);
    gets(s2.adr);
    printf("%s %s\n%s %s\n",s1.name,s1.adr,s2.name,s2.adr);
    printf("%d %d",s1.age,s2.age);
}
/*enter name of s1
anand bhagat
enter the age of s1
21
enter the address of s1
patna bihar
enter name of s2
aditya kumar
enter the age of s2
22
enter the address of s2
ranchi bihar
anand bhagat patna bihar
aditya kumar ranchi bihar
21 22
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/