// write a program to print fibonacci series
#include<stdio.h>
#include<conio.h>
 
void main()
{
    int n,f,f1=-1,f2=1;
    clrscr();
     
    printf("  Enter The Number Of Terms:");
    scanf("%d",&n);
     
    printf("  The Fibonacci Series is:");
     
    do
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        printf("  \n %d",f);
        n--;
    }while(n>0);
    getch();
}
