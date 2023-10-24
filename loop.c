#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);
    if(a==1){
        b = pow(b,a);
    }
    printf("the value of b is %d" ,b);
}