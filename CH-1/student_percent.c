#include<stdio.h>
int main()
{
    int marks1,marks2,marks3,marks4,marks5,total;
    int max_mark_stud =500;
    float percentage;
    printf("Enter marks in sub1:");
    scanf("%d",&marks1);
    printf("Enter marks in sub2:");
    scanf("%d",&marks2);
    printf("Enter marks in sub3:");
    scanf("%d",&marks3);
    printf("Enter marks in sub4:");
    scanf("%d",&marks4);
    printf("Enter marks in sub5:");
    scanf("%d",&marks5);
    total=marks1+marks2+marks3+marks4+marks5;
    printf("Aggregate marks of student is %d\n",total);
    percentage=(total/500.0)*100;
    printf("Percentage of student is %f",percentage);
    return 0;


}