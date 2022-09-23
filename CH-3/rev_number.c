#include<stdio.h>
int main()
{
    int num,rev_num=0,remainder,original;
    printf("enter a number:");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
    remainder=num%10;
    
    num=num/10;
    rev_num=rev_num*10+remainder;
    }
    printf("reversed number is %d\n",rev_num);

    if (original==rev_num)
    {
        printf("original number and reversed number are equal\n");
    }
    else
    {
        printf("original number and reversed number are  not equal\n");

    }
    
    return 0;
}
