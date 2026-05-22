#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    
    int first = num / 100;        
    int second = (num / 10) % 10; 
    int third = num % 10;         

    sum = first + second + third;

    printf("The sum of the digits of %d is: %d\n", num, sum);

    return 0;
}
