#include<stdio.h>
#include<conio.h>
void main()
{

    int i,j;
    int n=3;
int count=0;
clrscr();
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           
            count++;
            printf(" %d",count);
        }
        
        printf("\n");
    }
   getch();
}