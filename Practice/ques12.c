#include<stdio.h>
int main()
{
    int num,fd,ld,sum;
    printf("Enter number:");
    scanf("%d",&num);

    ld=num%10;
    for(fd=num;fd>=10;)
    {
        fd=fd/10;
    }
    sum=fd+ld;
    printf("Sum of first and last digit is %d",sum);

    return 0;
}
