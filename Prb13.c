#include <stdio.h>

int main()
{
   int one,two,three;

  printf("Enter the first integer : ");
  scanf("%d",&one);
   printf("Enter the second integer : ");
  scanf("%d",&two);
   printf("Enter the third integer : ");
  scanf("%d",&three);


  if(one > two && one > three )
  {
    printf("Maximum is : %d",one);

  }

  else if(one < two && two > three )
  {
    printf("Maximum is : %d",two);
    
  }

  else if(three > two && one < three )
  {
    printf("Maximum is : %d",three);
    
  }

  else {
    printf("More than one number is highest");
  }



}