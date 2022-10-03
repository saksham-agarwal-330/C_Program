#include<stdio.h>
void leap_not(int);
int main()
{
    int year;
    printf("Enter Year:");
    scanf("%d",&year);
    leap_not(year);
    return 0;
}
void leap_not(int year)
{
    if((year%4==0) && (year%100!=0) || (year%400==0))
    printf("Leap Year");
    else
    printf("Not Leap Year");

}