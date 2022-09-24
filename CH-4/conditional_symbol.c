#include<stdio.h>
int main()
{
    int s;
    
    printf("Enter a small character");
    scanf("%d",&s);

    ((s>=0 && s<=47) || (s>=58 && s<=64) || (s>=91 && s<=96) || (s>=123 && s<=127) )?printf("You enetred a special symbol"):printf("not a special symbol");


    return 0;
}