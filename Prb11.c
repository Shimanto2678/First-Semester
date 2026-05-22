#include<stdio.h>
int main()
{
    float one,two,n1,n2;
    printf("Enter the first item weight: ");
    scanf("%f",&one);
    printf("Enter amount of first item: ");
    scanf("%f",&n1);
    printf("Enter the secondt item weight: ");
    scanf("%f",&two);
    printf("Enter amount of second item; ");
    scanf("%f",&n2);

    float avg = (one * n1 + two * n2) / ( n1 + n2);

    printf("The average weight is %f",avg);




}