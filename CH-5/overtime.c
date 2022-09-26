#include<stdio.h>
int main()

{
    int twh,oh,count=1;
    // twh = total worked hours by employee
    // oh = overtime worked hours
    float op ;
    // op = overtime paid

   

    while (count<=10)
    {
        printf("enter total hours worked by employee:\n");
        scanf("%d",&twh);

        if(twh>=40)
        {
            oh=twh-40;
            op=oh*12.00;
            printf("Overtime pay is %f\n",op);
        }
        else
        {
            printf("Employee did'n do overtime\n");
        }
        count=count+1;
    }
    return 0;
        
    }
    

