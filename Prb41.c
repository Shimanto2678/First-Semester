#include<stdio.h>
int main(){

   int a,j = 1 ;
   int x = 0;

   printf("Enter total lines : ");
   scanf("%d",&a);

   for( int i = 1; i <= a; i++)
   {
       while( x < 3)
       {
        printf("%d ",j++);
         x++;
        }

        x = 0;

        printf("\n");

       }
   


}

   