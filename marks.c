#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total_marks;
	float percentage;
	printf("enter marks obtained in each subject out of 100\n");
	scanf("%d",&s1);
	scanf("%d",&s2);
	scanf("%d",&s3);
	scanf("%d",&s4);
	scanf("%d",&s5);
	total_marks=s1+s2+s3+s4+s5;
	percentage=0.2*total_marks;
	printf("total marks obtained and percentage are %d,%f respectively",total_marks,percentage);
	return 0;
}
