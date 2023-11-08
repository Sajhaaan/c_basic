#include<stdio.h>
int main (){
    int a;
    printf("enter the day number");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("monday\n");
        break;
    case 2:
    printf("tuesday\n");
    break;
    case 3:
    printf("wednessday\n");
    case 4:
    printf("thursday\n");
    break;
    case 5:
    printf("frdat\n");
    break;
    case 6: 
    printf("saturday\n");
    break;
    case 7:
    printf("sunday\n");
    break;
    
    default:
        break;
    }
}