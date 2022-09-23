#include<stdio.h>
int main()
{
    int x,y;
    
    printf("Enter x and y coordinates:");
    scanf("%d %d",&x,&y);

    if(x==0 && y!=0)
    {
        printf("point %d,%d lie on y axis");
    }
    
    else if(y==0 && x!=0)
    {
        printf("point %d,%d lie on x axis",x,y);
    }

    else
    {
        printf("point %d,%d lie on origin",x,y);
    }

    return 0;
}