#include<stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);
void mod(int a, int b);

void main()
{
	char choice;
	int num1,num2;
	
	
	do
	{
		printf("\n------press the number------\n");
		printf(" press 1. Add (+)\n");
		printf(" prees 2. Sub (-)\n");
		printf(" press 3. Mul (*)\n");
		printf(" press 4. Div (/)\n");
		printf(" prees 5. Mod (%)\n");
		printf(" prees 'y'. The Exit....\n");
		
		choice = getchr();
		
		
		
		if(choice>='1' && choice<='5')
		{
			printf("Enter first number :");
			scanf("%d",&num1);
			
		}
		else
		{
			printf("Enter second number :");
			scanf("%d",&num2);
		}
		
		switch(choice)
		{
			case '1' :
				add(num1 , num2);
			break;
			case '2':
				sub(num1 , num2);
			break;
			case '3' :
				mul(num1 , num2);
			break;
			case '4' :
			    div(num1 ,num2);
			break;
			case '5' :
				mod(num1, num2);
			break;	 				
		}
	
	}else if(choice !='y')
	    {
		printf("Please try again\n");
    	}
    }while(choice !='y');
    
    printf("Exiting the program  good bye !!\n");
    return 0;
    
    void add(int a, int b)
    {
    	printf("Result :%d\n",a+b);
	}
	
	void sub(int a, int b)
	{
		printf("Result :%d\n",a-b);
	}
	
	void mul(int a, int b)
	{
		printf("Result :%d\n",a*b);
	}
	
	void div(int a, int b)
	{
		printf("Result :%d\n",a/b);
	}
	
	void mod(int a, int b)
	{
		printf("Result :%d\n",a%b);
	}
	
	

	
}
