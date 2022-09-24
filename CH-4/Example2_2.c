// Method 2
#include<stdio.h>
int main()
{
    int age;
    char ms ,sex;

    printf("Enter sex,age,marital status:");
    scanf("%c %d %c",&sex,&age,&ms);

    if((ms=='M')||(ms=='U' && sex=='M' && age>30)||(ms=='U' && sex=='F' && age>25))
    {
        printf("Driver should be insured\n");
    }
    else
    {
        printf("Driver should not be insured");
    }

    return 0;
}