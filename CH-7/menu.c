#include <stdio.h>
int main()
{
    int user,num1,fact=1,i=1,num2,j=2,num3;
    while(user!=4)
    {
    printf("1. Factorial of a number\n");
    printf("2. Prime or not\n");
    printf("3. Odd or even\n");
    printf("4. Exit\n");
    scanf("%d",&user);
        switch (user)
        {
        case 1:
            printf("Enter number:");
            scanf("%d",&num1);
            
            while (i<=num1)
            {
                fact=fact*i;
                i++;
            }
            printf("Factorial of %d is %d\n\n",num1,fact);
            break;

        case 2:
            printf("Enter number:");
            scanf("%d",&num2);
            while(j<=num2-1)
            {
                if(num2%j==0)
                {
                    printf("Not a prime number\n\n");
                    break;
                }
                j++;
            }
            if(num2==j)
                {
                    printf("Prime Number\n\n");
                    break;
                }
            break;    

        case 3:
            printf("Enter Number:");
            scanf("%d",&num3);
            if(num3%2==0)
            {
            printf("Even Number\n\n");
            }
            else
            printf("Odd Number\n\n");
            break;
        
        case 4:
            printf("You Exited the menu\n\n");
            break;
            
        default:
            printf("Wrong input\n\n");
        }
    }
    return 0;
}