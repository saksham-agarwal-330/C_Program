#include<stdio.h>
#include<math.h>
int main()
{
    float p,q,n,i,b,c;
    float a,r;
    for(i=1;i<=10;i++)
    {
        printf("Enter principal,rate,no of times,time period:\n");
        scanf("%f %f %f %f",&p,&r,&q,&n);
        // a=p*(pow(((q+r)/q),n*q));

        b=(q+r)/q;
        c=n*q;
        a=p*pow(b,c);
        printf("Final Amount is %f\n",a);
    }
    
    return 0;
}