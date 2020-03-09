#include <stdio.h>

int isPallindrome(int);

int main()
{
	int n;
	printf("Enter Number: ");
	scanf("%d",&n);
	
	if(n>=0)
	{
		if(isPallindrome(n))
			printf("Pallindrome\n");
		else
			printf("Not Pallindrome\n");
	}
	else
		printf("Invalid input\n");
	main();
}

int isPallindrome(int a)
{
	int num = a,rev = 0,r;
	
	while(num>0)
	{
		r = num%10;
		rev = rev*10 + r;
		num/=10;
	}
		
	if(rev == a)
		return 1;
	else 
		return 0;
}
