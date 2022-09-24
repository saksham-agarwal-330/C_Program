#include<stdio.h>
int main()
{
    float w,h,bmi;

    printf("Enter weight(kg) and height(m):");
    scanf("%f %f",&w,&h);

    bmi=w/h;

    if(bmi<=15)
    {
        printf("Starvation");
    }

    else if(bmi>=15.1 && bmi<=17.5)
    {
        printf("Anorexic");
    }

    else if(bmi>=17.6 && bmi<=18.5)
    {
        printf("Underweight");
    }
    
    else if(bmi>=18.6 && bmi<=24.9)
    {
        printf("Ideal");
    }
    
    else if(bmi>=25 && bmi<=25.9)
    {
        printf("Overweight");
    }
    
    else if(bmi>=30.0 && bmi<=30.9)
    {
        printf("Obese");
    }
    
    else if(bmi>=40)
    {
        printf("Morbidly Obese");
    }

    return 0;
}