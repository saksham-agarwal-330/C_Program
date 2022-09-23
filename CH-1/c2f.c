#include<stdio.h>
int main()
{
    // to convert celsius to fahrenheit
    int c;
    int f;
    
    printf("Enter temperature in celsius:");
    scanf("%d",&c);
    f =(c*9/5)+32;
    printf("temperature in fahrenheit is %d",f);
    return 0;
}