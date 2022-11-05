//write a program to find average of three numbers
#include <stdio.h>
#include<conio.h>
    void main()
{
      int a,b,c;
      clrscr();
      float avg;
      printf("(Enter Three Numbers)\n");
     printf("Enter First Number  : ");
      scanf("%d", &a);
      printf("\nEnter Second Number : ");
      scanf("%d",&b);
      printf("\nEnter Third Number : ");
      scanf("%d",&c);
      avg=a+b+c/3.0;
      printf("\nAverage of Three Numbers : %f",avg);
    
      getch();
}