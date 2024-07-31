#include<stdio.h>
#include<conio.h>

main()
{
      int a,b,c;
      clrscr();
      printf("Enter the a number :");
      scanf("%d",&a);
      printf("Enter the b number :");
      scanf("%d",&b);
      printf("Enter the c number :");
      scanf("%d",&c);
      if(a<b)
      {  if(a<c)

	  printf("%d is min");

      }
      else
      {  if(b<c)
	  printf("%d is min");
      }

      getch();




}
