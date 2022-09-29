#include<stdio.h>
int main()
{
    int n,onum,rem,sum,i,count=0;
    printf("N:");
    scanf("%d",&n);

    printf("All armstrong numbers between 1 to %d :\n",n);
    
    for(i=1;i<=n;i++)
    {
        onum=i;sum=0;
        while(onum!=0)
        {
            
            rem=onum%10;
            onum=onum/10;
            count++;

            if(count==1)
            sum=sum+rem;
            else if(count==2)
            sum=sum+(rem*rem);
            else if(count==3)
            sum=sum+(rem*rem*rem);
            
        }
        if(i==sum)
        printf("%d ",sum);
    }
}