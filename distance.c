#include<stdio.h>
int main()
{
	float km,m,ft,inch,cm;
	printf("enter distance between two cities in kilometers");
	scanf("%f",&km);
	m=1000.0*km;
	ft=3280.84*km;
	inch=39370.1*km;
	cm=100000.0*km;
	printf("distance between two cities in meters,feet,inches,centimeters is %f,%f,%f,%f respectively",m,ft,inch,cm);
	return 0;
}
