#include<stdio.h>
int main()
{
    int n,i,j;
    printf("n:");
    scanf("%d",&n);
    printf("Prime number between 1 to %d are ",n);

    for(i=1;i<=n;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            break;

        }
        if(j==i)
        {
        printf("%d, ",i);
        }
    }
    return 0;
}