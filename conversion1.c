//convert kg to gram and vice-versa
#include<stdio.h>
int main()
{
    float kg,g,gram,kilogram;

    printf("Enter value in kilogram:");
    scanf("%f",&kg);
    
    gram=1000*kg;
    printf("weight in Gram=%f",gram);

    kilogram=gram/1000;
    printf("weight in Kilogram=%f",kilogram);
}