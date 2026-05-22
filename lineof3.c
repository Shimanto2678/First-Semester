#include<stdio.h>
int main(){
    int a;
    printf("Enter number of row : ");
    scanf("%d",&a);


    for ( int i = 0; i <= 3 * a;i + 3 ){
        printf("%d %d %d\n",i,i+1,i+2);
    }
}