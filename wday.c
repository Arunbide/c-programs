// weekday number and print weekday name using switch.
 
#include <stdio.h>
#include<conio.h>
 
void main()
{
    int wDay;
    clrscr();
     
    printf("Enter weekday number (0-6): ");
    scanf("%d",&wDay);
     
    switch(wDay)
    {
        case 0: 
            printf("Sunday");
            break;
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        default:
            printf("Invalid weekday number.");
    }

    getch();
}