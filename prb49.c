#include<stdio.h>
int main()
{    int x;
    int arr[5];
      
    printf("Enter the first number : ");
    scanf("%d",&x);
    arr[5] = { x,3*x,9*x,27*x,81 * x };
    

    printf("%d",arr[5]);
}