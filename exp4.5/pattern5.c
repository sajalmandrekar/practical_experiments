/*

a
b b
c c c
d d d d

half pyramid
*/

#include <stdio.h>

int main()
{
	int n,i,j;
	printf("Enter no of lines:");
	scanf("%d",&n);
	
	if(n>=0 && n<=26)
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
				printf("%c ",64+i);
			printf("\n");	
		}
	else
		printf("invalid input");


}
