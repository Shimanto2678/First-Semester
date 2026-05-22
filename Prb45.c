#include<stdio.h>
int main()
{

    float sum = 0;

    

    for(int i = 1 ; i <= 50; i ++)
    {
       sum += (float) 1/i;
    }

    printf("The final sum is : %f",sum);
}