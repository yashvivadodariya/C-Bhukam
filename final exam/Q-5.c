#include<stdio.h>

main()
{
	int a;
	
	printf("Enter any number :");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("%d is even number ",a);
		
	}
	
	else
	{
		printf("%d is odd number ",a);
	}
}
