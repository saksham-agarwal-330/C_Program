#include<stdio.h>
void factors(int);
int main()
{
    int num,x;
    printf("Enter Number:");
    scanf("%d",&num);
    factors(num);
    // printf("%d\n",i);
    return 0;
}
void factors(int num)
{   
    int org=num;
    
    for(int i=1;i<=org;i++)
    {    
         
        while(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
            
        }
        
    }

}


