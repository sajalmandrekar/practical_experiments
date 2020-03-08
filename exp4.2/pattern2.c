/*
	1 1 1 1
	2 2 2 2
	3 3 3 3
	4 4 4 4
display nXn square


*/

#include <stdio.h>

int main()
{
	int n,i,j;
	printf("Enter N:");
	scanf("%d",&n);
	
	if(n>=0)
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				printf("%d\t",i);
			printf("\n");	
		}
	else
		printf("Enter positive  value!");
}
