#include<stdio.h>

int main()
{
    int length=5,breadth=4,perimeter,area;
    // int length,breadth,perimeter,area; 

    
    // printf("enter length:");
    // scanf("%d",&length);


    // printf("enter breadth:");
    // scanf("%d",&breadth);



    // perimeter of rectangle
    perimeter=2*(length+breadth);

    //area of rectangle
    area=length*breadth;

    if(area>perimeter)
    {
        printf("area of rectangle is greater than it's perimeter ");
    }
    else
    {
        printf("area of rectangle is less than it's perimeter ");
    }
    return 0;

}