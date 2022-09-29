#include<stdio.h>
int main()
{
    int num,sum=0,remainder;
    printf("Enter number:");
    scanf("%d",&num);

    for(;num!=0;)
    {
        remainder=num%10;
        num=num/10;
        sum=sum+remainder;
    }
    printf("%d",sum);
    return 0;
}