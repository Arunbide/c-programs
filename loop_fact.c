#include <stdio.h>
#include<conio.h>
 
void main()
{
  int nbr, i = 1, f = 1;
  clrscr();
 
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &nbr);
 
  while(i <= nbr)
  {
      f = f * i;
      i++;
  }
 
  printf("%d! = %ld\n", nbr, f);
 
   getch();
}