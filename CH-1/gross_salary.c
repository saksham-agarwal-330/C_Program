#include<stdio.h>
int main()
{
    //calculate gross salary
    /* bs= basic salary
       da=dearness allowance
       hra=house rent allowance */

    int gs,bs,da,hra;
    printf("Enter Ramesh basic salary:");
    scanf("%d",&bs);

    da=(bs*40)/100;
    printf("ramesh dearness allowance is %d\n",da);

    hra=(bs*20)/100;
    printf("ramesh house rent allowance is %d\n",hra);
    
    gs=bs+da+hra;
    printf("ramesh gross salary is %d\n",gs);
    return 0;


}