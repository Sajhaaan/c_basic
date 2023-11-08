#include <stdio.h>
#include <conio.h>

int main()
{
    float year;
    double months, days, hours, minutes, seconds;
    int choice;
    printf("Enter year:");
    scanf("%f", &year);
    printf("Convert year into, \n");
    printf("1 Months\n");
    printf("2 Days\n");
    printf("3 Hours\n");
    printf("4 Minutes\n");
    printf("5 Seconds\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
        switch(choice){
                    case 1:
                          months=year*12;
                          printf("months in %2f years=%.2f",year,months);
                          break;
                    case 2:
                          days=year*365;
                          printf("days in %2f years=%.2f",year,days);
                          break;
                    case 3:
                          hours=year*365*24;
                          printf("hours in %2f years=%.2f",year,hours);
                          break;
                    case 4:
                          minutes=year*365*24*60;
                          printf("minutes in %2f years=%.2f",year,minutes);
                          break;
                    case 5:
                          seconds=year*365*24*60*60;
                          printf("seconds in %2f years=%.2f",year,seconds);
                          break;
                    default:
                            printf("invalid");
        }
        return 0;        

}