#include<stdio.h>
#include<math.h>
int main()
{
    int cx,cy,x,y,r,d;

    printf("enter center point coordinates:");
    scanf("%d %d",&cx,&cy);

    printf("enter x y point coordinates:");
    scanf("%d %d",&x,&y);

    printf("enter radius of circle:");
    scanf("%d",&r);


    d=sqrt(pow(x-cx,2.0)+pow(y-cy,2.0));

    if(d<r)
    {
        printf("point %d ,%d is inside the circle\n",x,y);
    }

    else if(d>r)
    {
        printf("point %d ,%d is outside the circle\n",x,y);
    }

    else
    {
        printf("point %d ,%d is on the circle\n",x,y);
    }
    return 0;

}