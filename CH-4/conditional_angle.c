#include<stdio.h>
#include<math.h>
int main()
{
    int angle,sum;

    printf("enter a angle:");
    scanf("%d",&angle);

    sum=sin(angle)*sin(angle)+cos(angle)*cos(angle);

    printf("sum of squares of sine and cosine of this angle %d is %d",angle,sum);

    return 0;
}