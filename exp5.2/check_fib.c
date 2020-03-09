#include <stdio.h>

int isFibonacci(int);

int main()
{
	int n;
	printf("Enter no: ");
	scanf("%d",&n);
	
	if(isFibonacci(n))
		printf("Fibonacci number\n");
	else
		printf("Not Fibonacci number\n");
}

int isFibonacci(int n)
{
	int a=1,b=-1,t;
	
	if(n==0)
		return 1;
	else 
	{
		while(a<n)
		{
			t=a;
			a = a+b;
			b=t;	
		}
		
		if(a==n)
			return 1;
		else
			return 0;
	}
}
