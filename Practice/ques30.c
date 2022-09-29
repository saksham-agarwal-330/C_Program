#include<stdio.h>
int main()
{
    int num,i,sum=0,rem;
    printf("enter number:");
    scanf("%d",&num);
    i=num;
    for(;num!=0;)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
        
    }
    if(i==sum)
    {
        printf("%d is an armstrong number",i);
    }
    else
    {
        printf("%d is not an armstrong number",i);
    
    }    
    return 0;


}