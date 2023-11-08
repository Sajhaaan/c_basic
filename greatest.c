#include<stdio.h>
int main ()
{
    int num1,num2,num3;
    printf("enter first digit");
    scanf("%d",&num1);
     printf("enter sec");
     scanf("%d",&num2);
     printf("enter 3rd");
     scanf("%d",&num3);
     if (num1>=num2 && num1>=num3)
     {
        printf("num1 is greater");
     }else if (num2>=num1 && num2>=num3)
     {
        printf("num2 is greater");
     }else {
        printf("num 3 is greater %d",num3);
     }
     
     

    return 0;
    
    }