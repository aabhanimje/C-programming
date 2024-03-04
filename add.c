//Addition of two numbers
#include<stdio.h>
int main()
{
    //initialize variable needed for your code
    int a,b,sum;
    printf("Enter two integers:");
    //value of a and b will be taken from the user for addition
    scanf("%d %d",&a,&b);
    
    sum=a+b;
    //addition will displayed
    printf("Addition=%d",sum);
    return 0;
}