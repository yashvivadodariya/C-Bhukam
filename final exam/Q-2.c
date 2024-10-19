#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("Enter any number :");
	scanf("%d",&a);
	printf("Enter any number :");
	scanf("%d",&b);
	printf("Enter any number :");
	scanf("%d",&c);
	printf("Enter any number :");
	scanf("%d",&d);
	
	if(a< b)
	{
		printf("%d is min number ");
		
	}
	else if(b<c)
	{
		printf("%d is min number");
	}
	else if(c<d)
	{
		printf("%d is min number");
	}
	
	
}

