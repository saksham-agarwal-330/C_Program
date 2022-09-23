#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,aot;

    printf("enter coordinates of x1 y1\n:");
    scanf("%d %d",&x1,&y1);

    
    printf("enter coordinates of x2 y2\n:");
    scanf("%d %d",&x2,&y2);

    
    printf("enter coordinates of x3 y3\n:");
    scanf("%d %d",&x3,&y3);

    aot=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;

    if(aot==0)
    {
        printf("All the three points fall on one straight line.\n");
    }

    else
    {
        printf("All the three points  not fall on one straight line.\n");
    }

    return 0;
}