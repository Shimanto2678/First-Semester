#include<stdio.h>
int main(){
  int x;

  printf("Enter the weight : ");
  scanf("%d",&x);
  if(x % 2 == 0 && x != 2 )
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
}