#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,z;
    printf("combination of 1,2,3 without repeataton are:\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(z=1;z<=3;z++)
            {
                if(i!=j && i!=z && j!=z)
                {
                    printf("%d%d%d\n",i,j,z);
                }
            }
        }
    }
    return 0;
}