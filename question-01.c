// // #include <stdio.h>

// // int main()
// // {
// //     /*int num;
// //     // Take the number as input from user.
// //     printf("Enter the value of number whose multiplication table is to printed");
// //     scanf("%d", &num);
// //     for (int i = 1; i <= 10; i++)
// //     {
// //         printf("%d x %d = %d\n", num, i, i * num);
// //     }*/

// //     int a ;
// //     printf("enter the value of a\n ");
// //     scanf("%d",&a);
// //     for(int i=10;i>=1;i--){
// //         printf("%d*%d = %d\n",a , i , a*i);
// //     }
// //     return 0;
// // }
// #include<stdio.h>
// int main()
// {
// int a;
// printf("Enter the value of a:");
// scanf("%d",&a);
// for(int i = 10 ;i>=1;i--){
//     printf("%d*%d = %d\n",a , i , a*i);
// }
// return 0;
// }
#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a");
scanf("%d",&a);
for(int i =0;i<=10;i++){
    printf("%d*%d = %d\n",a , i , a*i);
}
return 0;
}
