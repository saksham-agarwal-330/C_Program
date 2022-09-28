#include<stdio.h>
#include<math.h>
int main()
{
    int y,count=1;
    float i,x;
    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x=x+0.5)
        {
            i=2+(y+0.5*x);
            printf("%d. i=%.2f, x=%.2f, y=%d\n",count++,i,x,y);
        }
    }
    return 0;


}