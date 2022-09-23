#include<stdio.h>
int main()
{
    float r,pi,circumference;
    pi=3.14;
    printf("Enter the radius:");
    scanf("%f",&r);
    circumference=2*pi*r;
    printf("Circumference of circle is %f",circumference);
    return 0;
}