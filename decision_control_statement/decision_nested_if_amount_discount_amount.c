#include <stdio.h>
main()
{
    int itemno, quan;
    float rate, amt, dis, netamt;
    printf("enter item no.");
    scanf("%d", &itemno);
    printf("enter rate and quantity");
    scanf("%f%d", &rate, &quan);
    amt = rate * quan;
    if (itemno == 1)
    {
        if (amt >= 25000)
            dis = amt * 40 / 100;
        else
            dis = amt * 30 / 100;
    }
    else
    {
        if (amt >= 10000)
            dis = amt * 25 / 100;
        else
            dis = amt * 15 / 100;
    }
    netamt = amt - dis;
    printf("amount is %f\n", amt);
    printf("discount is %f\n", dis);
    printf("net amount is %f\n", netamt);
}
/*enter item no.1
enter rate and quantity5000
10
amount is 50000.000000
discount is 20000.000000
net amount is 30000.000000
PS C:\Users\DELL\OneDrive\Desktop\c_language>*/