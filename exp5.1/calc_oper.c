#include<stdio.h>

float sum(float,float); // PERFORMS ADDITION
float sub(float,float); // PERFORMES SUBRACTION
float mult(float,float); // PERFORMES MULTIPLICATION
float div(float,float); // PERFORMES DIVISION
int error=0;

int main()
{
	float x,y,res;
	printf("Enter values for X,Y:");
	scanf("%f%f",&x,&y);
	
	printf("Sum = %f\nDifference = %f\nProduct = %f\n",sum(x,y),sub(x,y),mult(x,y));
	
	res = div(x,y); 
	if(error==0)
		printf("Division = %f\n",res);
	else if(error == 1)
		printf("Division = Infinity\n");
}

float sum(float a,float b)
{
	return a+b;
}

float sub(float a,float b)
{
	return a-b;
}

float mult(float a,float b)
{
	return a*b;
}

float div(float a,float b)
{
	if(b!=0)
		return a/b;
	else
	{
		error = 1;
		return 0;
	}	
}
