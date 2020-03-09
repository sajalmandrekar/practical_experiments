#include <stdio.h>

void pyramid(int);

int main()
{
	int lines;
	printf("Enter Number: ");
	scanf("%d",&lines);
	if(lines>=0)
		pyramid(lines);
	else
		printf("Invalid input!");
}

void pyramid(int lines)
{
	int i,j;
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=lines-i;j++)
			printf("  ");

		for(j=1;j<=i;j++)
			printf("* ");

		printf("\n");	
	}
}
