// Method 2

#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;

    printf("Enter five subject marks:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    per=(m1+m2+m3+m4+m5)*100/500;

    if(per>=60)
    {
        printf("First division\n");
    }
    
    if((per>=50) && (per<60))
    {
        printf("Second division\n");
    }
    
    if((per>=40) && (per<50))
    {
        printf("Third division\n");
    }
    
    if(per<40)
    {
        printf("Fail\n");
    }

    return 0;

}
