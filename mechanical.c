#include<stdio.h>
int main()
{  int x;
   printf("Enter the array length :");

    scanf("%d",&x);
    int i;
    int arr[x];
    for( i = 0; i < x; i++)
    {
      scanf("%d",&arr[i]);
    }
   
   
   for(i = 0; i < x; i++)
   {
   
   
    for(int j = i + 1; j <= x; j++)
    {
      if(arr[i] > arr[j])
      {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
       

    }
  }

printf("%d",arr[x]);

  }
 