#include<stdio.h>
int main()
{
    int i,num1,num2,hcf=1,min;
    printf("Enter 2 number:");
    scanf("%d %d",&num1,&num2);

    min=(num1<num2)?num1:num2;
    for(i=1;i<=min;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    printf("%d",&hcf);
    return 0;
    
}