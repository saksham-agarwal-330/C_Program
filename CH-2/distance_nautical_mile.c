#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2,d;

    printf("enter the value of latitude of 1 place:");
    scanf("%f",&l1);

    printf("enter the value of longitude of 1 place:");
    scanf("%f",&g1);

    printf("enter the value of latitude of 2 place:");
    scanf("%f",&l2);

    printf("enter the value of longitude of 2 place:");
    scanf("%f",&g2);


    //distance in nautical miles

    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("Distance between tem is %f",d);

    return 0;



}