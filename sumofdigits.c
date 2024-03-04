//write a program to accept three digits no. and find out the sum of digits
#include<stdio.h>
int main()
{
    int no,d1,d2,sum=0;
    printf("Enter any three digits no.");
    scanf("%d",&no);

    d1=no%10; //this will give uh the quotient which will be your first digit of a no.
    no=no/10;
    d2=no%10; //this will give uh the quotient which will be your second digit of a no.
    no=no/10;

    sum=d1+d2+no;
    printf("Sum of digits of no.:%d",sum);
       
}