#include<stdio.h>
int main()
{
    int clas,grace=0,failed;
    printf("Enter the class obtained by the student:\n");
    scanf("%d",&clas);
    printf("Enter the number of subject in which he has failed\n");
    scanf("%d",&failed);
    switch (clas)
    {
    case 1:
        if(failed>3)
        printf("He didn't get any any grace");
        else
        printf("He got the grace of %d marks",5*failed);
        break;
    
    case 2:
        if(failed>2)
        printf("He didn't get any any grace");
        else
        printf("He got the grace of %d marks",4*failed);
        break;

    case 3:
        if(failed>1)
        printf("He didn't get any any grace");
        else
        printf("He got the grace of %d marks",5);
        break;
    
    default:
        printf("Wrong Input");
        break;
    }

    return 0;

}