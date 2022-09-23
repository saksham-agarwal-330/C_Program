#include<stdio.h>
#include<math.h>
int main()
{
    // int num,a,b,c,d,e,f,g,h,i,j;

    // printf("enter the 5 digit number");
    // scanf("%d",&num);

    // a=num/10;
    // b=num%10;
    // c=a/10;
    // d=a%10;
    // e=c/10;
    // f=c%10;
    // g=e/10;
    // h=e%10;
    // i=g/1;

    // printf("reverse of your number is %d%d%d%d%d",b,d,f,h,i);

    int num,count=0,remainder;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)

    {
        remainder =num%10;
        num=num/10;
    
        count=count*10+remainder;



    }
    printf("%d",count);
    



    return 0;

}