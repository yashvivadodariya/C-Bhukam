#include<stdio.h>

main()
{
	int a=1,n;
	
	printf("Enter any number :");
	scanf("%d",&n);
	 
	 while(a<=n)
	 {
  		 if(a%2!=0)
	 	{
	 		printf("%d ",a);
		 }
		 a++;
	 }


}
