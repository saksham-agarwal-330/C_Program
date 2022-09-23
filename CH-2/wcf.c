#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    float v,wcf;
    
    printf("enter the temperature:");
    scanf("%d",&t);
    
    printf("enter the velocity:");
    scanf("%f",&v);

    // wcf = wind chill factor
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("wind chill factor is %f",wcf);

    return 0;


}