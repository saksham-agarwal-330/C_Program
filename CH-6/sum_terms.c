#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j;
    float fact,sum=0.0;
    for(i=1;i<=7;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;

        }
        sum=sum+(i/fact);
        
    }
    printf("Sum of first seven terms of given series is %f",sum);
    getch();
    return 0;
}