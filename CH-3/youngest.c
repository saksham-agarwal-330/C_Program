#include<stdio.h>
int main()
{
    int ram,shyam,ajay;

    printf("Enter ram age:");
    scanf("%d",&ram);

    printf("Enter shyam age:");
    scanf("%d",&shyam);

    printf("Enter ajay age:");
    scanf("%d",&ajay);

    if(ram<shyam && ram<ajay)
    {
        printf("ram is youngest");
    }
    
    else if(shyam<ram && shyam<ajay)
    {
        printf("shyam is youngest");
    }

    else if(ajay<ram && ajay<shyam)
    {
        printf("ajay is youngest");
    }

    return 0;
    
}