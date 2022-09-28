#include<stdio.h>
int main()
{
    int i,pop=100000;

    for(i=1;i<=10;i++)
    {
        pop=pop-(pop*10)/100;
        printf("%d year = %d\n",i,pop);
    }
    return 0;
}