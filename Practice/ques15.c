#include<stdio.h>
int main()
{
    int num,product=1,remainder;
    printf("Enter number:");
    scanf("%d",&num);

    for(;num!=0;)
    {
        remainder=num%10;
        num=num/10;
        product=product*remainder;

    }
    printf("%d",product);
    return 0;
    
}