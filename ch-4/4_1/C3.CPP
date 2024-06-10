#include<stdio.h>
#include<conio.h>

main()
{    int x,y,ans;


     clrscr();
     printf("Enter first number :");
     scanf("%d",x);
     printf("Enter second number :");
     scanf("%d",y);
     ans = (x*x*x) + (2*x*x*y) + (2*x*y*y)  + (y*y*y);
     printf("ans = %d",ans);


     getch();






}