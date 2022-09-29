#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter Number:");
    scanf("%d",&num);

    for(i=2;i<=num-1;i++)
    {
        if(num%i==0){
            printf("%d is not a prime number",num);
            break;
        }
    }
    if(i==num)
    {
        printf("%d is a prime number",num);

    }
    
    return 0;
}