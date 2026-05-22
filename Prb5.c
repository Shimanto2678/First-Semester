#include<stdio.h>
int main()
{
    float a,b;

    printf("Enter the length- ");
    scanf("%f",&a);

     printf("Enter the width- ");
    scanf("%f",&b);

    float area = a * b ;
    float peremeter = 2 * (a + b);
    printf("The peremeter of the rectangle is : %f",peremeter);
    printf("The radius of the rectangle is : %f",area);


}