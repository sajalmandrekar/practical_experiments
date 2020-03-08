/*

1
2 3
4 5 6
7 8 9 10

half pyramid

*/

#include <stdio.h>

int main()
{
	int n,i,j,count=0;
	printf("Enter no of lines:");
	scanf("%d",&n);
	
	if(n>=0)
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
				printf("%d\t",++count);
			printf("\n");	
		}
	else
		printf("Enter positive  value!");


}
