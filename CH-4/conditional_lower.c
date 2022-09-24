#include<stdio.h>
int main()
{
    char l,x;
    
    printf("Enter a small character");
    scanf("%c",&l);

    (l>='a' && l<='z')?printf("You enetred a small character"):printf("not a small character");
    return 0;
}