#include <stdio.h>

int main()
{
  int n , count = 0;
  int i;
  printf("enter the  value of n\n");
  scanf("%d",&n);
  for ( i=1;  i <= n; i++)
  {
    if (n % i == 0)
    {
    count++;
    }
  }
  if(count==2){
    printf("%d is prime number",n);
  }
  else{
    printf("%d is not a prime no", n);
  }

  
  
  return 0;
}