#include<stdio.h>
int main()
{
    float distance, time ,speed;
    
    printf("Enter the distance travelled : ");
    scanf("%f",&distance);
    printf("Enter the time taken : ");
    scanf("%f",&time);

    speed = distance / time ;

    printf("The speed of the car is : %f",speed);
    

}