#include<stdio.h>
int main()

{
    int s1,s2,s3;
    printf("enter the 3 side of triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);

    if(s1>s2 && s1>s3 && s2+s3>s1)
    {
        printf("valid triangle");
    }

    if(s2>s1 && s2>s3 && s1+s3>s2)
    {
        printf("valid triangle");
    }

    if(s3>s1 && s3>s2 && s1+s2>s3)
    {
        printf("valid triangle");
    }

    else
    {
        printf("not valid triangle");
    }
    
    
    return 0;
}