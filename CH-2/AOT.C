#include<stdio.h>
#include<math.h>
int main()
{
    //Area of Triangle

    int s,s1,s2,s3;
    float area;
    // s is semi perimeter of triangle
    //s1,s2,s3 are sides of triangle

    printf("enter value of side1 in cm:");
    scanf("%d",&s1);

    printf("enter value of side2 in cm:");
    scanf("%d",&s2);

    printf("enter value of side3 in cm:");
    scanf("%d",&s3);

    s=(s1+s2+s3)/2;
    printf("semi perimeter of triangle is %d\n",s);

    //area of triangle 

    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("area of triangle is %f",area);
    
    return 0;







}
