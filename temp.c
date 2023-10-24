//program for converting farenheit to degree celcius 
#include<stdio.h>
int main()
{
	float farenheit,celcius;
	printf("enter temperature in farenheit \t");
	scanf("%f",&farenheit);
	celcius=(farenheit-32)*0.555555555555;
	printf("temperature in degree celcius is %f",celcius);
	return 0;
}

