/**
 positive negative or zero using if else
 */
 
#include <stdio.h>
#include<conio.h>
 
void main()
{
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
     
 
    if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    else if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    else
    {
        printf("Number is ZERO");
    }
   getch();
}
