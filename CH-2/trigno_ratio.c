#include<stdio.h>
#include<math.h>
int main()
{
    int angle;
    float a,b,c,d,e,f;
    printf("enter the value of angle:");
    scanf("%d",&angle);
    
    a=(sin(angle*180)/3.14);
    b=cos(angle);
    c=tan(angle);
    d=1/sin(angle);
    e=1/cos(angle);
    f=1/tan(angle);
    
    printf("sin(%d)=%f\n",angle,a);

    printf("cos(%d)=%f\n",angle,b);
    
    printf("tan(%d)=%f\n",angle,c);
    
    printf("cosec(%d)=%f\n",angle,d);
    
    printf("sec(%d)=%f\n",angle,e);
    
    printf("cot(%d)=%f\n",angle,f);



    return 0;

}