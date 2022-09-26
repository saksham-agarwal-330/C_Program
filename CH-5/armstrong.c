#include<stdio.h>
int main()
{
    int num,sum,remainder,i=1;
    while(i<=500)
    {
        num=i;sum=0;
        while(num!=0)
        {
            remainder=num%10;
            num=num/10;
            sum=sum+(remainder*remainder*remainder);
        }
        if(i==sum)
           {
               printf("%d\n",sum);
           }
           i++;
    }
    
    
    
    return 0;
}