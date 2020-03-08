/*

*
**
***
half pyramid

*/

#include <stdio.h>

int main()
{
	int n,i,j;
	printf("Enter no of lines:");
	scanf("%d",&n);
	
	if(n>=0)
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
				printf("* ");
			printf("\n");	
		}
	else
		printf("Enter non -ve value!");


}
