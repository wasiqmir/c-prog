#include<stdio.h>
int main()
{

	int no,pmr,cmr,points,bill,teb;
	char name[20];
	printf("enter no pmr and cmr");
	scanf("%d %d %d",&no,&pmr,&cmr);
	printf("enter name and type connection, if domestic enter 1 & if commercial enter 2");
	scanf("%s",name);
	scanf("%d",&teb);
	points=cmr-pmr;
	if(teb==1)
	{if(points<=100)
	bill=points*1;
	if((points>100)&&(points<=200))
	bill=100*1+(points-100)*2.50;
	if((points>200)&&(points<=500))
	bill=100*1+100*2.50+(points-200)*4;
	if(points>500)
	bill=100*1+100*2.50+300*4+(points-500)*6;
	}
	else
	{
		if(points<=100)
		bill=100*2;
		if((points>100)&&(points<=200))
		bill=100*2+(points-100)*4.50;
		if((points>200)&&(points<=500))
		bill=100*2+100*4.50+(points-200)*6;
		if(points>500)
		bill=100*2+100*4.50+300*6+(points-500)*7;
	}
    printf("bill = %d",bill);
}

