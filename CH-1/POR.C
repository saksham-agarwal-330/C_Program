#include<stdio.h>
int main(){
    // Perimeter of rectangle
    int length,breadth,per;
    printf("Enter the length:");
    scanf("%d",&length);
    printf("Enter the breadth:");
    scanf("%d",&breadth);
    per=2*(length+breadth);
    printf("Perimeter of rectangle is %d",per);
    return 0;

}