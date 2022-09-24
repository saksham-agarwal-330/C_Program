#include<stdio.h>
#include<math.h>



float max(float ,float);


float max(float a,float b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main()
{
    float r,g,b;
    float c,m,y,k,w;

    // printf("Enter value of red green blue :");

    scanf("%f %f %f",&r,&g,&b);

    float red=r/255;
    float green=g/255;
    float blue=b/255;

    w=max(red,max(green,blue));
    c=((w-red)/w);
    m=(w-green)/w;
    y=(w-blue)/w;
    k=(1-w);

    printf("cmyk values are %f %f %f %f",c,m,y,k);


    return 0;
}

