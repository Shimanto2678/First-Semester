#include <stdio.h>

int main()
{
   long id;
   float hours;
   printf("Enter the employee ID : ");
   scanf("%ld",&id);
   if( id > 9999999999){
    printf("Wrong ID");
    
   }

   printf("Enter the work hour per day : ");
   scanf("%f",&hours);

  double salary = hours * 30 * 15000;


   printf("Employee id : %ld\n",id);
   printf("Total salary is : $%lf",salary);



    return 0;
}