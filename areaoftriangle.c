//write a program to all required dimensions from the user and find out the area of triangle
#include<stdio.h>
int main()
{
    float b,h,area;

    printf("Enter base and height:");
    scanf("%f %f",&b,&h);
    
    area=0.5*b*h;
    printf("Area of Triangle=%f",area);
}