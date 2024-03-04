//convert gb to mb and vice-versa
#include<stdio.h>
int main()
{
    float mb,gb;

    printf("Enter value in GB:");
    scanf("%f",&gb);
    
    mb=gb*1024;
    printf("MB=%f",mb);

    gb=mb/1024;
    printf("GB=%f",gb);
}