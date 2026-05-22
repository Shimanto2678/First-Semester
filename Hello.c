#include<stdio.h>

int main()
{   float dis,fuel;
    printf("Enter the distance travelled-");
    scanf("%f",&dis);
    printf("Enter the amount of fuel consumed (ltr)- ");
    scanf("%f",&fuel);

    float avg = dis / fuel;

    printf("The average consumption per liter is- %f",avg);




}
