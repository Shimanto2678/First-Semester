#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;

    printf("Enter a (coefficient of X^2 ) : ");
    scanf("%f",&a);
    printf("Enter b (coefficient of X ) : ");
    scanf("%f",&b);
    printf("Enter c (constant) : ");
    scanf("%f",&c);

        float x1,x2;

    x1 = (-b + sqrt ( b * b - 4 * a * c)) / 2 * a;
    x2 = (-b - sqrt ( b * b - 4 * a * c)) / 2 * a;

    printf("X1 is %f ",x1);
    printf("X2 is %f",x2);



}