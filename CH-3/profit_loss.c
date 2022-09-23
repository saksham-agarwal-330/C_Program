#include<stdio.h>
#include<math.h>
int main()
{
    int cp,sp,profit,loss;
    
    printf("Enter cost price:");
    scanf("%d",&cp);

    printf("Enter selling price:");
    scanf("%d",&sp);


    if(cp<sp)
    {
        printf("Seller has made profit\n");
        profit=sp-cp;
        printf("profit is %d",profit);
    }
    else
    {
        printf("Seller has incurred loss\n");
        loss=cp-sp;
        printf("loss is %d",loss);
    }
    return 0;





}