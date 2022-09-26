#include<stdio.h>
#include<climits>
int main()
{
    int num,total,i=1,max=INT_MIN , min=INT_MAX;
    printf("how many number you want to enter?");
    scanf("%d",&total);
    while(i<=total)
    {
        printf("Enter number:");
        scanf("%d",&num);
        if(max<num)
        max=num;
        if(min>num)
        min=num;
            
        i++;

    }
    printf("%d",max-min);

    return 0;

}