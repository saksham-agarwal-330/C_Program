#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("N:");
    scanf("%d",&n);
    printf("Sum of all odd numbers between 1 to %d:",n);
    while(i<=n)
    {
        if(i%2!=0)
        sum=sum+i;
        i++;

    }
    printf("%d",sum);
    return 0;
}