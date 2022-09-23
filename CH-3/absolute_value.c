#include<stdio.h>

int main()
{
    int num;

    printf("enter a number:");
    scanf("%d",&num);

    if(num>=0)
    {
        printf("absolute value is %d",num);
    }

    else
    {
        num=(-1)*num;
        printf("absolute value is %d",num);
    
    }
}