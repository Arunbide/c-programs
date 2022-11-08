// print odd number from 1 to n using do while
#include <stdio.h>
#include<stdio.h>

void main()
{
	int number;
	int n;
   number=1;
   clrscr();

	printf("Enter the value of N: ");
	scanf("%d",&n);
	printf("Odd Numbers from 1 to %d:\n",n);
 
do {
    if(number%2 != 0)
	printf("%d ",number);
		number++;
     }while(number<=n);
	 getch();
}
