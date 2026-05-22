#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the starting number :");
    scanf("%d",&a);
    printf("Enter the ending number : ");
    scanf("%d",&b);
   int i;
   int sum = 0;

    
        for( int i = a; i <= b; i ++ && i % 17 != 0 )
    {  if (i % 17 != 0) {
             sum = sum + i; }
        }
    
         printf("The sum is : %d",sum);
}