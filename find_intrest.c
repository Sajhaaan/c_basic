#include<stdio.h>
#include<math.h>
int main()
{
float principle,rate,time,Cl;
printf("enter principle(amount):");
scanf("%f",&principle);
printf("enter time:");
scanf("%f",&time);
printf("enter rate:");
scanf("%f",&rate);
Cl=principle*(pow((1+rate/100),time));
printf("compound interest=%f",Cl);

return 0;


}