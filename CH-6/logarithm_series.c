#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,exp;
    float sum=0,term;
    printf("Enter value of x:");
    scanf("%d",&x);
    for(i=1;i<=7;i++)
    {
        if(i==1)
        {
            term=(x-1)/x;
            printf("%d\n",term);
        }
        else if(i>1)
        {
            exp=(x-1)/x;
            term=0.5*(pow(exp,i));
            printf("%d\n",term);
        }
    }
    sum=sum+term;
    printf("%f\n",sum);
    return 0;
}