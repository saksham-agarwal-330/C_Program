#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter number:");
    scanf("%d",&num);

    printf("All factor of %d are ",num);
    
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d ,",i);
        }
    }
    return 0;
}