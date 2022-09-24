#include<stdio.h>
int main()
{
    int h,t;
    float c;

    printf("enter hardness ,carbon content,tensile:");
    scanf("%d %f %d",&h,&c,&t);

    if(h>50 && c<0.7 && t>5600)
    {
        printf("Grade is 10");
    }
    
    else if(h>50 && c<0.7)
    {
        printf("Grade is 9");
    }
    
    else if(c<0.7&& t>5600)
    {
        printf("Grade is 8");
    }
    
    else if(h>50 && t>5600)
    {
        printf("Grade is 7");
    }
    
    else if(h>50 || c<0.7 || t>5600)
    {
        printf("Grade is 6");
    }

    else
    {
        printf("Grade is 5");
    }

    return 0;
}