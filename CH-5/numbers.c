#include<stdio.h>
int main()
{
    int num,i=1,p=0,n=0,z=0,total;

    printf("how many time you want to enter number:");
    scanf("%d",&total);
    while (i<=total)
    {
        printf("Enter number:");
        scanf("%d",&num);
        
        if(num>0)
       p++;
    else if(num<0)
       n++;
    else if(num==0)
       z++;

       i++;
    
    }
    printf("positive no. are %d\n negative numbers are %d\n zero numbers are %d\n",p,n,z);
    return 0;
    
}