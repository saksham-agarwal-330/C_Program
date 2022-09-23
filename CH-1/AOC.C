#include<stdio.h>
int main()
{
    // To find the area of circle and volume of cylinder
    float r,h;
    float pi=3.14;
    printf("Enter the value of radius:");
    scanf("%f",&r);
    printf("Enter the value of height:");
    scanf("%f",&h);
    printf("area of circle is%f\n",pi*r*r);
    printf("area of cylinder is%f\n",pi*r*r*h);2



    return 0;
}