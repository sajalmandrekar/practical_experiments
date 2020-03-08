/*
 *  n n n n
 *  n n n n
 *  n n n n
 *  n n n n
 * 
 *  displays 4x4 square
 * */

#include <stdio.h>

int main()
{
	int n,i,j;
	printf("Enter N:");
	scanf("%d",&n);
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
			printf("%d\t",n);
		printf("\n");	
	}

}

