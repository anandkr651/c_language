#include<stdio.h>
main()
{
    int a[3][3],i,j,sr,sc;
    printf("enter a number");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
       }
       for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
       }
       for (i=0;i<3;i++)
       {
           sr=sc=0;
           for(j=0;j<3;j++)
           {
               sr=sr+a[i][j];
               sc=sc+a[j][i];
           }
           printf("sr=%d ,sc=%d\n",sr,sc);
       }
}
/*enter a number1
2
3
4
5
6
7
8
9
1       2       3
4       5       6
7       8       9
sr=6 ,sc=12
sr=15 ,sc=15
sr=24 ,sc=18
PS C:\Users\DELL\OneDrive\Documents> */
