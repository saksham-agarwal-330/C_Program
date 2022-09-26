#include<stdio.h>
int main()
{
    int a,b,raise=1,i=1;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    while(i<=b)
    {
        raise=raise*a;
        i++;
    }
    printf("%d",raise);

    return 0;
}