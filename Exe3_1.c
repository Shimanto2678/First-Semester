#include<stdio.h>
int main()
{
  float n;

  int sum = 0.0;
  
  scanf("%f",&n);
  for (int i = 1; i <= n; i ++)
  {
    
    sum = sum + 1.0/i ;

  }
   
  printf("%f",sum);

}