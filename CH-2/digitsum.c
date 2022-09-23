#include<stdio.h>

int main()
{
    int num,a,b,c,d,e,f,g,h,i,sum;
    
    printf("Enter 5 digit number");
    scanf("%d",&num);

    a=num/10;
    b=num%10;
    c=a/10;
    d=a%10;
    e=c/10;
    f=c%10;
    g=e/10;
    h=e%10;
    i=g/1;
 
    // int sum1=0,remainder;
    // while(num!=0)
    // {
    //   remainder =num%10;
    //   num=num/10;
    //   sum=sum+remainder;


    // }
    

    sum=b+d+f+h+i;

    printf("sum of digit is %d",sum);



    
    return 0;

}