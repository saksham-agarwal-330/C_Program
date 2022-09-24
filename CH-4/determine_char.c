#include<stdio.h>
int main()
{
    int c;

    printf("Enter a capital/small letter or a digit or special symbol OF their ASCII values:");
    scanf("%d",&c);

    if((c>=65 && c<=90))
    {
        printf("You entered a capital character\n");
    }
    else if((c>=97 &&c<=122))
    {
        printf("You entered a small character\n");
    }
    else if((c>=48 &&c<=57))
    {
        printf("You enter a digit character\n");
    }
    else
    {
        printf("You enter a special symbol\n");
    }

    return 0;



}