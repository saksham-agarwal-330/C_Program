#include<stdio.h>
int main()
{
    int onum,num,rnum=0,remainder;
    printf("Enter number:");
    scanf("%d",&num);
    
    onum=num;
    for(;num!=0;)
    {
        remainder=num%10;
        num=num/10;
        rnum=rnum*10+remainder;
    }
    if(onum==rnum){
        printf("%d is a palindrome number",onum);
    }
    else
    {
        printf("%d is not a palindrome number",onum);
    }
    return 0;
}