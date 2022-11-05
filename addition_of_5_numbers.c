    #include<stdio.h>
   #include<conio.h>
   void main(){
      clrscr();
    int a,b,c,d,e;
    float tot;
  
    printf("enter the first number:");
    scanf("%d",&a);
     printf("enter the second number:");
    scanf("%d",&b);
     printf("enter the third number:");
    scanf("%d",&c);
     printf("enter the fourth number:");
    scanf("%d",&d);
    printf("enter the fifth number:");
    scanf("%d",&e);
    tot= a + b + c + d + e;
     printf("the addtion of 5 number is %f",tot);
     getch();
}