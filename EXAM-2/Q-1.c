#include<stdio.h>

main()
{
	
     int x,y,sum;
     
     printf("Enter the number :");
     scanf("%d",&x);
	 printf("Enter the number :");
     scanf("%d",&y);
	
	for(x; x<=y; x++)
	{
		printf("%d ",x,y);
		
	
	}
	
	for(x; x<=y; x++)
	{
		(sum+=x+y);
	}
	
	printf("sum = %d",sum++);
}
