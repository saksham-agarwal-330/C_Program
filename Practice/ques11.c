#include<stdio.h>
int main()
{
    int num,ld,fd;
    printf("Enter number:");
    scanf("%d",&num);
    
    ld=num%10;
    printf("Last digit is %d\n",ld);

    
    fd=num;
    while(fd>=10)
    {
        fd=fd/10;

    }
    printf("First digit is %d\n",fd);
    
}