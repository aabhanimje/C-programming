//write a program to accept radius from the user and find out the area and circumference of circle
#include<stdio.h>
int main()
{
    float r,area,circumference;

    printf("Enter radius:");
    scanf("%f",&r);
    // value of pi=3.142
    area=3.142*r*r;
    printf("Area of circle=%f",area);

    circumference=2*3.142*r;
    printf("Circumference of circle=%f",circumference);
}