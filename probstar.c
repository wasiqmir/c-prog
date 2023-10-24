# include<stdio.h>

int main(){
    int n;
    int j; 
    printf("enter the value of n\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for (j=1;j<=i+1;j++){
            printf("*");

        }
        printf("\n");
}
    /*int j;
    int m;
    printf("enter the value of j\n");
    scanf("%d",&j);
    for(int i=0;i<j;i++){
        for(j=1;j<=i+1;j++){
            printf("*");
        }
        printf("\n");
    }*/
    
    return 0;
}