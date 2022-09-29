#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("N:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;

    }
    printf("Sum of all natural nummbers between 1 to %d : %d",n,sum);
    return 0;
}