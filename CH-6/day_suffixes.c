#include<stdio.h>
int main()
{
    int h;
    for(h=0;h<=23;h++)
    {
        if(h==0)
        printf("12 Midnight\n");
        else if(h<12)
        printf("%d AM \n",h);
        else if(h==12)
        printf("12 Noon\n");
        else if(h>12)
        printf("%d PM\n",h%12);
        
        
    }
    return 0;
}