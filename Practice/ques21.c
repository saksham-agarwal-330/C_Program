#include<stdio.h>
int main()
{
    int b,e,i,power=1;
    printf("Enter base and exponent:");
    scanf("%d %d",&b,&e);

    for(i=1;i<=e;i++)
    {
        power=power*b;
    }
    printf("%d ^ %d = %d",b,e,power);
    return 0;
}