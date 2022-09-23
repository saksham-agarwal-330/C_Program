#include<stdio.h>
#include<math.h>
int main(){
    //cartesian product to polar product
    int x,y,r,w;

    printf("enter the x and y coordinates:");
    scanf("%d %d",&x,&y);

    r=sqrt(pow(x,2.0)+pow(y,2.0));
    w=atan(y/x);

    printf("Polar Co-ordinates are %d,%d",r,w);

    return 0;
}