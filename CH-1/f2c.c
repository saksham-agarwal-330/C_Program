#include<stdio.h>
int main()
{
    int f,c;
    //conversion of fahrenheit to centigrade degrees
    printf("Enter the temperature in your city in fahrenheit:");
    scanf("%d",&f);
    c =(f-32)*(5)/9;
    printf("temperature in your city in centigrade is %d",c);
    return 0;

}