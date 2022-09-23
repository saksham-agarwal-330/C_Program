#include<stdio.h>
#include<math.h>
int main()
{
    int total;
    int rs1=0;
    int rs2=0;
    int rs5=0;
    int rs10=0;
    int rs50=0;
    int rs100=0;

    printf("total money:");
    scanf("%d",&total);
    if(total >= 100)
    {
        rs100=total/100;
        total=total%100;
    }

    if(total>=50)
    {
        rs50=total/50;
        total=total%50;
    }

    if(total>=10)
    {
        rs10=total/10;
        total=total%10;
    }

    if(total>=5)
    {
        rs5=total/5;
        total=total%5;
    }

    if(total>=2)
    {
        rs2=total/2;
        total=total%2;
    }

    if(total>=1)
    {
        rs1=total/1;
        total=total%1;
    }
    
    printf("ropees100 notes:%d\n",rs100);
    
    printf("ropee50 notes:%d\n",rs50);
    
    printf("ropees10 notes:%d\n",rs10);
    
    printf("ropees5 notes:%d\n",rs5);
    
    printf("ropees2 notes:%d\n",rs2);
    
    printf("ropees1 notes:%d\n",rs1);
    

    




    return 0;

}