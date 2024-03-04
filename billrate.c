//write a program to accept last reading and current reading,find out the consumed unit and calculate the bill amount at rate 5/unit.
#include<stdio.h>
int main()
{
    int Cr,Lr,Cu,Bill;

    printf("Enter last and current reading:");
    scanf("%d %d",&Cr,Lr);

    Cu=Cr-Lr;
    Bill=Cu*5;
    printf("Consumed unit:%d",Cu);
    printf("Amount to be paid:%d",Bill);
}
