#include<stdio.h>
int main()
{
   int passed;

   printf("Enter the number of days passed : ");
   scanf("%d",&passed);

   int year = passed / 365;
   int month = (passed % year ) / 30;
   int days = passed - (( passed % year ) +( passed % month ));
   printf("Year- %d",year);
   printf("Month - %d",month);
   printf("Days - %d",days);
}