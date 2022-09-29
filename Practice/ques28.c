#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("N:");
    scanf("%d",&n);
    printf("Sum of prime numbers between 1 to %d :",n);

    for(i=1;i<=n;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        sum=sum+j;
    }
    
    printf("%d",sum);
    
    return 0;

}