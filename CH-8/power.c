#include<stdio.h>
int power(int,int);
int main()
{
    int a,b;
    int res=1.0;
    printf("Enter value of a and b:");
    scanf("%d %d",&a,&b);
    res=power(a,b);
    printf("%d",res);
    return 0;

}

int power(int a,int b)
{   int res=1;
    for(int i=1;i<=b;i++)
    {
         res=res*a;
    }
    return (res);    
}