#include<stdio.h>
int main()
{
    //Conversion of distance km to meters,feet,inches,centimeters
    int km,inch,meter,feet,cm;
    printf("Enter distance between to cities in km:");
    scanf("%d",&km);
    meter=km*1000;

    printf("Distance between to cities in meters is %d\n",meter);
    cm=km*100000;
    
    printf("Distance between to cities in meters is %d\n",cm);
    feet=km*3281;
    
    printf("Distance between to cities in meters is %d\n",feet);
    inch=km*39370;
    
    printf("Distance between to cities in meters is %d\n",inch);


}