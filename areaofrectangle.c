//write a program to all required dimensions from the user and find out the area of rectangle
#include<stdio.h>
int main()
{
    float l,b,h,area;

    printf("Enter length,base and height:");
    scanf("%f %f %f",&l,&b,&h);
    
    area=l*b*h;
    printf("Area of Rectangle=%f",area);
}