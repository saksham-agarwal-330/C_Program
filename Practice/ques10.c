#include<stdio.h>
int main()
{
    int num,count=0,remainder;
    printf("Enter number:");
    scanf("%d",&num);
    while (num!=0)

    {
        remainder=num%10;
        num=num/10;
        count++;

    }
    printf("%d",count);
    return 0;
    
}