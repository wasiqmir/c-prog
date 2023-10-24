# include<stdio.h>

int main(){
    int num ;
    int i;
    printf("enter the value of numbers whose multiplication table is to be printed");
    scanf("%d", &num);
    for(int i = 1 ;i<=10 ;i++){
        printf("%d X %d = %d\n",  num , i,  i* num);
    }
    return 0;
}