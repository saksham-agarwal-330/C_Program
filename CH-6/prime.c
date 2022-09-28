#include<stdio.h>
int main()
{
    int i,j;
    printf("prime numbers between 1 to 300 are ");

    for(i=1;i<=300;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d ",j);
            
        }
    }
    return 0;



}