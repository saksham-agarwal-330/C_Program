#include<stdio.h>

void reverse(int num)
{
    int remainder=0,rev=0;
    while(num!=0)
    {
        remainder=num%10;
        num=num/10;

        rev=rev*10+remainder;

    }
    printf("%d",rev);
}

int main()
{
    int num,quat,rev=0,remainder=0,rem=0;

    printf("Enter number:");
    scanf("%d",&num);

    while(num!=0)
    {
        quat=num/8;
        remainder=num%8;
        num=quat;

        rem=rem*10+remainder;


    }

    reverse(rem);
    

    return 0;
}