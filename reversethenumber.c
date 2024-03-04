//write a program to accept three digits no. and reverse it
#include<stdio.h>
int main()
{
    int no,d1,d2,rev;
    printf("Enter any three digits no.");
    scanf("%d",&no);

    d1=no%10; //this will give uh the quotient which will be your first digit of a no.
    no=no/10;
    d2=no%10; //this will give uh the quotient which will be your second digit of a no.
    no=no/10;

    rev=d1*100 + d2*10 + no;
    printf("Reverse of no.:%d",rev);
       
}