#include<stdio.h>
int main()

{
    int s1,s2,s3;

    printf("enter the 3 side of triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);

    if((s1==s2 && s1!=s3)  || (s2==s3 && s2!=s1) || (s3==s1 && s3!=s2))
    {
        printf("it is an isosceles triangle");
    }
    else if(s1==s2 && s1==s3)
    {
        printf("it is an equilateral triangle");
    }
    else
    {
        printf("it is an scalene or right angled triangle");
    }

    return 0;
}