//write a program to accept 5 subjects marks anf find out total and percentage
#include<stdio.h>
int main()
{
    float maths,phy,chem,eng,sci;
    float total,percentage;

    printf("Enter marks of 5 subjects:");
    scanf("%f %f %f %f %f",&maths,&phy,&chem,&eng,&sci);
    
    total=maths+phy+chem+eng+sci;
    printf("Total marks=%f",total);

    percentage=(total/250)*100;
    printf("Percentage scored=%f",percentage);
}