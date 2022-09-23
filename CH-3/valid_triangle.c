#include<stdio.h>

int main()
{
    int A1,A2,A3,sum;

    printf("enter the value of angle 1:");
    scanf("%d",&A1);

    printf("enter the value of angle 2:");
    scanf("%d",&A2);
    
    printf("enter the value of angle 3:");
    scanf("%d",&A3);

    sum=A1+A2+A3;
    
    if(sum==180)
    {
        printf("valid triangle");
    }
    else
    {
        printf(" not valid triangle");
    }

    return 0;
    
}