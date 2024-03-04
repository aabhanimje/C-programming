//Calculate sq. and cube of a no.
#include<stdio.h>
int main()
{
    int a,square,cube;

    printf("Enter a no.:");
    scanf("%d",&a);
    
    square=a*a;
    printf("sq. of a no.=%d",square);

    cube=square*a;
    printf("cube of a no.=%d",cube);
}