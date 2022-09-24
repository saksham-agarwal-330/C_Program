// Method 1
#include<stdio.h>
int main()
{
    char sex,ms;
    int age;

    printf("Enter sex,age,marital status:");
    scanf("%c %d %c",&sex,&age,&ms);

    if(ms=='M')
    {
        printf("Driver should be insured\n");
    }
    else
    {
        if(sex=='M')
        {
            if(age>30)
            {
                printf("Driver should be insured\n");
            }
            else
            {
                printf("Driver should not be insured\n");
            }    
        
        }
        else
        {
            if(age>25)
            {
                printf("Driver should be insured\n");
            }
            else
            {
                printf("Driver should not be insured");
            }
        }


    }
    return 0;
}