/*
   *
  ***
 *****
  ***
   *
  print a rhombus
*/

#include <stdio.h>
int main()
{
	int n,i,j;
	printf("Enter no of lines(positive and odd):");
	scanf("%d",&n);
	
	if(n>=0 && n%2==1)
	{
		for(i=1;i<=n/2;i++)
		{
			//printing whitespaces
			for(j=1;j<=n/2+1-i;j++)
				printf(" ");
			
			//printing stars
			for(j=1;j<=2*i-1;j++)
				printf("*");
				
			printf("\n");	
		}
	
		for(i=1;i<=n/2+1;i++)
		{
			//printing whitespaces
			for(j=1;j<=i-1;j++)
				printf(" ");
			
			//printting stars
			for(j=1;j<=n-2*i+2;j++)
				printf("*");
				
			printf("\n");	
		}
		
	}
	else
		printf("invalid input");
}
