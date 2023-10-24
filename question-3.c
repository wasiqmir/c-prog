# include<stdio.h>

int main(){
   /* int  i = 1;
    int sum = 0 , n;
    printf("Enter a number : \n");
    scanf("%d",&n);
    while(i <=10){  
        printf("%d *%d = %d\n", n, i, n*i);
        i++;
        sum+=n*i;
    }
    printf("sum of multiplication  table is %d", sum);*/

    int i = 0;
    int sum = 0, n;
    printf("Enter the number : \n");
    scanf("%d",&n);
    while( i<=20){
        printf("%d *%d = %d\n", n , i , n*i);
        i++;
        sum+=n*i;
    }
    printf("sum of multiplication table is %d",sum);
    return 0;
}