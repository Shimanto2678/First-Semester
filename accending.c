#include<stdio.h>
int main(){

int a,b;

    printf("Enter the first number-  ");
    scanf("%d",&a);
    printf("Enter the second number-  ");
    scanf("%d",&b);
    printf("\n");

     if ( a > b){
          printf("Desecending");
     }
     else if( b > a){
        printf("Accending");
    
     }
    else{
        printf("Both numbers are equal");
    }
}