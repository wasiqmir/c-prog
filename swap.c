//program for swapping two numbers
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a is %d and b is %d",a,b);
	return 0;
}
