#include<stdio.h>
int main()
{
    int num,remainder,rev=0;
    printf("Enter number:");
    scanf("%d",&num);

    for(;num!=0;)
    {
        remainder=num%10;
        num=num/10;
        rev=rev*10+remainder;
    }
    printf("%d",rev);
    return 0;
}
