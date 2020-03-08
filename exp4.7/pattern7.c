/*

*****
 ***
  *
inverted full pyramid
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
			//printing whitespaces
			for(j=1;j<=i-1;j++)
				printf(" ");
			
			//printting stars
			for(j=1;j<=2*n-2*i+1;j++)
				printf("*");
				
			printf("\n");	
		}
	else
		printf("invalid input");


}
