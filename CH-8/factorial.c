#include<stdio.h>
int factorial(int);
int main()
{
    int num,fact;
    printf("Enter number:");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial is %d",fact);
    return 0;
}
int factorial(int n)
{
    int fact=1,i=1;
    while(i<=n)
    {
    fact=fact*i;
    i++;
    }
    if(n==0)
    return(1);
    else
    return(fact);
}