#include<stdio.h>
int main(){
    float dist, fuel;
    printf("Enter the total distance travelled in km : ");
    scanf("%f",&dist);
    printf("Total fuel consumed : ");
    scanf("%f",&fuel);


    float avg = dist / fuel;

    printf("Average consumption is : %f",avg);

}