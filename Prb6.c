#include<stdio.h>
int main(){
    float rad;
     printf("Enter the radius : ");
     scanf("%f",&rad);
     float area = rad * rad * 3.1416;
     float peremeter = 2 * 3.1416 * rad;

     printf("The area of the circle is : %f\n",area);
     printf("The peremeter of the circle is : %f\n",peremeter);

     return 0;
}