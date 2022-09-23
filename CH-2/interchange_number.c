#include<stdio.h>
int main()
{
    int a,c,d;
    printf("enter 2 numbers:");
    scanf("%d %d",&c,&d);

    a=c;
    c=d;
    d=a;

    printf(" 2 number are %d %d",c,d);
    return 0;
}